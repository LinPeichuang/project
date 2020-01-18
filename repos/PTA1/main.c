#include <stdio.h>
 
 
/**
 * hello.c
 */
 
 
#include <stdlib.h>
#include <string.h>
#include <elf64.h>
#include <file.h>
#include <errno.h>
//#include <unistd.h>
 
#define ELF_HEAD_LENGTH 128
#define MAGIC_NUM       0x464c457f
#define SECTION_TABLE_MAX    40
static uint32_t SecTableStrIndx = 0;
uint32_t SecStrTableOff = 0;
uint16_t SecTabNum = 0;
 
/**elf �ļ�ͷ��section������ͼ��***/
int check_elf_head(FILE *file )
{
    FILE *file_elf = file;
    int i = 0;
    int MagNum = 0;
    unsigned long  file_size = 0;
    int sechnum = 0;
	uint32_t symsize = 0;
	uint32_t symoff = 0;
	uint32_t nSyms = 0,kk=0;
    struct Elf32_Ehdr *Elf_header = NULL;
    struct Elf32_Shdr *Section_header = NULL;
	struct Elf32_Sym  *Symbol_tab = NULL;
 
    //file_elf = fopen(path,"r");
 
    /*�ļ���С*/
	fseek(file_elf,0,SEEK_END);
    file_size = ftell(file_elf);
    fseek(file_elf,0,SEEK_SET);
    printf("file total size is:%ld bytes\n",file_size);
    fread(Elf_header,sizeof(struct Elf32_Ehdr),1,file_elf);	
	
    printf("\nSection Name String Table index: %d\n",SecTableStrIndx);
    
	/**ELF header����**/
    printf("Magic:\t");
    for(MagNum=0; MagNum<16; MagNum++)
    {
       printf("%02x ",Elf_header->e_ident[MagNum]);
    }
	
	/**ȷ���Ƿ�Ϊelf��ʽ**/
	if((Elf_header->e_ident[0] == '\x7f') && (Elf_header->e_ident[1] == ELFMAG1) \
		&& (Elf_header->e_ident[2] == ELFMAG2) && (Elf_header->e_ident[3] == ELFMAG3))
	{	
		printf("\nThis is ELF file!\n");
	}
	else
	{
		printf("\n NOT ELF file!\n");
		return -1;
	}
	
    printf("\n");
    printf("Type:                           \t%d\n",Elf_header->e_type);
    printf("Machine:                        \t%d\n",Elf_header->e_machine);  /* Architecture */
    printf("Version:                        \t%#02x\n",Elf_header->e_version);
    printf("Entry point address:            \t%#02x\n",Elf_header->e_entry);
    printf("Start of program headers:       \t%d(bytes)\n",Elf_header->e_phoff);
    printf("Start of section headers:       \t%d(bytes)\n",Elf_header->e_shoff);
    printf("Flags:                          \t%#02x\n",Elf_header->e_flags);
    printf("Size of this header:            \t%d(bytes)\n",Elf_header->e_ehsize);
    printf("Size of program headers:        \t%d(bytes)\n",Elf_header->e_phentsize);
    printf("Number of program headers:      \t%d\n",Elf_header->e_phnum);
    printf("Size of section headers:        \t%d(bytes)\n",Elf_header->e_shentsize);
    printf("Number of section headers:      \t%d\n",Elf_header->e_shnum);
    printf("Section header string table index:\t%d\n",Elf_header->e_shstrndx);
	if(Elf_header->e_ehsize != sizeof(*Elf_header))
	{
		printf("\nELF file header size is err\n!");
		return -1;
	}
	if(Elf_header->e_type != ET_REL && Elf_header->e_type != ET_EXEC )
	{
		printf("file type is err!__FUNCTION__ %s __LINE__ %d\n",__FUNCTION__,__LINE__);
	}
 
    /**section header**/
    sechnum = Elf_header->e_shnum;
    fseek(file_elf,Elf_header->e_shoff,SEEK_SET);
    printf("\n/*****section header table****/\n");
    fread(Section_header,sizeof(struct Elf32_Shdr),sechnum,file_elf);
    printf("[Nr] Name          Type          Addr         Off      Size     ES Flg  Al");
 
    for(i=0; i<sechnum; i++)
    {
      printf("\n[%d]  %x              %2x            %08x     %06x    %06x   %02x %02x  %02x "\
               , i,Section_header->sh_name,Section_header->sh_type,Section_header->sh_addr,\
               Section_header->sh_offset,Section_header->sh_size,Section_header->sh_entsize,\
               Section_header->sh_flags,Section_header->sh_addralign);
 
	  if(Section_header->sh_type == 2)/*if symtab*/
	  {		
		symsize = Section_header->sh_size;
		symoff = Section_header->sh_offset;
		nSyms = symsize/(Section_header->sh_entsize);
	  	fseek(file_elf,symoff,SEEK_SET);
		fread(Symbol_tab,sizeof(struct Elf32_Sym),nSyms ,file_elf);
	  }
        Section_header++;
    }
 
		printf("\n\n*******symbol table******");
		printf("\nid	size        other    bind\n");
		/*while(kk < nSyms)
		 {	
		    if(Symbol_tab->st_shndx == 2) //�text
		    {	
		    	
			    printf("[%d]	%x           %x        %x\n",kk,Symbol_tab->st_size,\
			           Symbol_tab->st_other,(Symbol_tab->st_info)>>4 );
		    }
		     kk++;
			 Symbol_tab++;
		 }*/
	
    return 0;
}
 
/*** Program Header Table ,ֻ�п�ִ���ļ��͹����ļ��г���ͷ,linux���readelf -l xx �ɲ鿴�ṹ***/
void ProgramHeadInfo(FILE *file,struct Elf32_Phdr *ProHead)
{
    FILE *file_elf = file;
    struct Elf32_Ehdr *Elf_header = NULL;
    struct Elf32_Phdr *Pro_header = NULL;
    uint32_t phoffset = 0; //����ͷ��ƫ��
    uint16_t phnum = 0;//����ͷ����Ŀ
    uint16_t phentsize = 0;// ����ͷ���С
    int num = 0;
 
	Elf_header = (struct Elf32_Ehdr *)malloc(sizeof(struct Elf32_Ehdr));
	memset(Elf_header,0,sizeof(struct Elf32_Ehdr));
	fseek(file_elf,0,SEEK_SET);
    fread(Elf_header,sizeof(struct Elf32_Ehdr),1,file_elf);
 
    phoffset = Elf_header->e_phoff;
    phnum = Elf_header->e_phnum;
	
    phentsize = Elf_header->e_phentsize;
    fseek(file_elf,phoffset,SEEK_SET);
    //fread((struct Elf32_Phdr*)Pro_header,phentsize,phnum,file_elf);
    fread((struct Elf32_Phdr *)Pro_header,phentsize,phnum,file_elf);
	//ProHead = Pro_header;
	memcpy((char *)ProHead, (char *)Pro_header, sizeof(struct Elf32_Ehdr));
    printf("\n/*****Program Headers:*****/\n");
    printf("starting at offset: %d\n",phoffset);
    printf("Number of program headers: %d\n",phnum);
    printf("Type           Offset   VirtAddr   PhysAddr   FileSiz     MemSiz    Flg\n");
    for(num=0; num<phnum; num++)
    {
        printf("%d           %-#6x   %-#x   %-#x   %-#5x     %-#5x    %-#x\n",Pro_header->p_type,Pro_header->p_offset,\
			    Pro_header->p_vaddr,Pro_header->p_paddr\
               ,Pro_header->p_filesz,Pro_header->p_memsz,Pro_header->p_flags);
        Pro_header++;
    }
	free(Elf_header);
	Elf_header = NULL;
    return;
}
 
/**����elf�ļ�segment ���ڴ��� 
����ֵ: elf��entry point**/
typedef void (*pCALLFUNC)(void);
 
uint32_t  LoadElf2Mem(FILE *file )
{
	struct Elf32_Phdr *ProHead = NULL;
	struct Elf32_Ehdr *Elf_header = NULL;
	FILE *file1 = file;
	uint16_t i = 0;
	int size=0;
	uint32_t addrPoint = 0;
	
 
	Elf_header = (struct Elf32_Ehdr *)malloc(sizeof(struct Elf32_Ehdr));
	memset(Elf_header,0,sizeof(struct Elf32_Ehdr));
 
	fseek(file1,0,SEEK_SET);
	size = fread(Elf_header, sizeof(struct Elf32_Ehdr), 1, file1);
	ProgramHeadInfo(file1,ProHead);
 
	for(i=0;i< Elf_header->e_phnum; i++,ProHead++)
	{
		if(ProHead->p_type != PT_LOAD )
		{	
			printf("\nnot  PT_LOAD %d  %d size: %d\n", Elf_header->e_phnum,ProHead->p_type,size);
		    continue;
		}
		if(ProHead->p_filesz)
		{
			fseek( file1,ProHead->p_offset,SEEK_SET);
			if((size = fread((char *)ProHead->p_vaddr,1,ProHead->p_filesz,file1)) != ProHead->p_filesz)
			
			{
				printf("\nfunction:%s,line:%d, read p_vaddr err!\n",__FUNCTION__,__LINE__);
				printf("\nread ����ֵ%d\n",size);
				printf("read(file,ProHead->p_vaddr,ProHead->p_filesz) != ProHead->p_filesz %x  p_filesz %d\n",\
					ProHead->p_vaddr,ProHead->p_filesz);
				//return;
			  }
	  
		}
		
		/**����Ŀռ�д0����BSS��**/
		if((ProHead->p_filesz) < (ProHead->p_memsz))
		{
			memset((char*)ProHead->p_vaddr+ProHead->p_filesz,
					0,
					ProHead->p_memsz - ProHead->p_filesz);
		}
		else{}
	}
	//pEntry = (uint32_t *)Elf_header->e_entry;
	addrPoint = Elf_header->e_entry;
	printf("\nEntry point address:%x",addrPoint);
	free(Elf_header);
	Elf_header = NULL;
return addrPoint;
}
 
 
int main(void)
{
    char *path ="D:/workspace_v7/test_one/Debug/app.out";
    FILE *file_elf = NULL;
    file_elf = fopen(path,"rb");
	pCALLFUNC pEntry = (pCALLFUNC)NULL;
	uint32_t addr = 0;
    if(file_elf == NULL)
    {
 
        printf("open file err!!%s\n",strerror(errno));
        return -1;
    }
	check_elf_head(file_elf);
	addr = LoadElf2Mem(file_elf);
	pEntry = (pCALLFUNC)addr;
	fclose(file_elf);
	 pEntry();
}

