#pragma once
#include<string>
using namespace std;
/**
 * ����ÿ������������֧��Ŀ a - Z  65 - 122
 * ����ʵ�ֵ�Trie���洢��string���͵ĵ��ʣ���ô��������д��Сд��ĸ
 * Ϊ����ߴ���Ŀɶ��ԣ�����ֱ�ӽ���Ӧ�ĵ���ֱ�Ӵ洢����ascllֵ��λ�ã�
 * ����ע����ǣ��Ⲣ�������ŵķ�����һ����˵������Ϊ�˽�ʡ�ռ䣬������
 * ���ô洢�ռ����Ԫ�ش洢�����磬Ӧ��Сдa�洢�� a - 'a'��λ�á�
 */
const int MaxBranchNum = 123;

/**
 * Trie���ڵ㶨��
 */
class TrieNode
{
public:
	/* ����������־λ */
	bool isWord;
	/* ���洢���ַ� */
	char word;
	/* �ж��ٵ���ͨ������ڵ�,���ɸ����ýڵ���ɵ��ַ���ģʽ���ֵĴ��� */
	int count;
	/* next����洢���е��ӽڵ� */
	TrieNode* next[MaxBranchNum];
public:
	/* ����ʼ�� */
	TrieNode(char word = 0)
	{
		this->word = word;
		isWord = false;
		count = 1; // ÿ���ַ���ʼ������һ��ǰ׺��
		memset(next, 0, sizeof(next)); // �ӽڵ��ʼ��
	}
};

/**
 * Trie���Ľṹ����
 */
class TrieTree {
	TrieNode* pRoot;
public:
	/* Trie���ĳ�ʼ�� */
	TrieTree()
	{
		pRoot = new TrieNode();
	}

	/* Trie�������� - �������ٺ������������ͷ������ڴ� */
	~TrieTree()
	{
		Destory(pRoot);
	}

	/* ���ٺ��� */
	void Destory(TrieNode* pRoot);

	/* ���뺯�� - ���뵥�� */
	void insert(string str);

	/* ɾ������ - ɾ������*/
	bool remove(string str);

	/* ��ѯ���� - ��ѯ�������� */
	bool search_Str(string str);

	/* ǰ׺���� - ��ѯָ��ǰ׺ */
	bool priSearch_str(string str);

	/* ǰ׺�������� - ��ѯָ��ǰ׺���ֵĴ��� */
	int getPriNum(string str);

	/* ����������ɾ������ʹ�ã� - ��ȡ��k��λ�����ڵĽ�� */
	TrieNode* getchNode(string str, int k);
};