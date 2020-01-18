
#include"myhead.h"
#include<string>
using namespace std;
/* �������� */

void TrieTree:: insert(string str)
{
	if (str.length() == 0 || search_Str(str))
		return;

	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;

	/* ���������뵥�ʵ�ÿ���ַ��������в��� */
	for (char str_ch : str)
	{
		/* ��·���и��ַ������ڣ�����count�򣬼������ӽڵ���� */
		if (curNode->next[str_ch] != nullptr)
		{
			curNode = curNode->next[str_ch];
			curNode->count++;
		}
		/**
		 * ��·���и��ַ���㲻���ڣ�Ϊ���ַ������µĽ�㣬
		 * ���������ӽڵ����
		 */
		else
		{
			TrieNode* newNode = new TrieNode(str_ch);
			curNode->next[str_ch] = newNode;
			curNode = curNode->next[str_ch];
		}
	}
	/* ���ʲ�����ɺ󣬸ý���������־λ��Ϊtrue */
	curNode->isWord = true;
}

bool TrieTree::search_Str(string str)
{
	if (str.length() == 0)
	{
		return false;
	}
	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;
	/* ����ָ����ѯ���ʵ�ÿ���ַ��������в��� */
	for (char str_ch : str)
	{
		/* ��ǰ��㲻Ϊ�գ���curNode���������ӽڵ�ƥ���¸��ַ� */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}

	/* ����ǰ��㲻Ϊ�ղ����䵥��������־λΪtrue�����ʾ���ʴ��ڡ�*/
	return (curNode != nullptr && curNode->isWord);
}

bool TrieTree::priSearch_str(string str)
{
	if (str.length() == 0)
	{
		return false;
	}
	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;
	/* ����ָ��ǰ׺��ÿ���ַ��������в��� */
	for (char str_ch : str)
	{
		/* ��ǰ��㲻Ϊ�գ���curNode���������ӽڵ�ƥ���¸��ַ� */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* ����ǰ��㲻Ϊ�գ����ʾǰ׺�Ǵ��ڵģ�����true��*/
	return (curNode != nullptr);
}

int TrieTree::getPriNum(string str)
{
	if (str.length() == 0)
	{
		return 0;
	}
	/* �����ǰ׺û�г��ֹ���ֱ�ӷ���0 */
	if (!priSearch_str(str))
		return 0;
	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;

	for (char str_ch : str)
	{
		/* ��ǰ��㲻Ϊ�գ���curNode���������ӽڵ�ƥ���¸��ַ� */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* ֱ�ӷ��ص�ǰ����count */
	if (curNode != nullptr)
		return curNode->count;
	return 0;
}

TrieNode* TrieTree::getchNode(string str, int k)
{
	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;

	for (char str_ch : str)
	{
		/* ��������k��Ԫ��ֱ������ѭ�� */
		if (k-- == 0)
			break;

		/* ��ǰ��㲻Ϊ�գ���curNode���������ӽڵ�ƥ���¸��ַ� */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* ���ص�k���ַ����ڵĽ�� */
	return curNode;
}

bool TrieTree::remove(string str)
{
	/* ͨ��search_Str��ѯ�����ж�Tire�����Ƿ����str �����ڷ���false */
	if (str.length() == 0 || !search_Str(str))
	{
		return false;
	}

	/**
	* �����strΪǰ׺�ĵ��ʸ�������1����ô���ǲ���������ɾ���õ���
	 * ����ֻ�Ǹõ������һ���ַ���isword����false����ʾ��������
	 * �Ǹ��������ʡ�������������������Ϊǰ׺�ģ���Ȼ������Trie����
	 * ��ע�⣬���ǻ���Ҫ���ϻ��ݵ���������ÿ������count��Ա
	 */
	if (getPriNum(str) > 1)
	{
		int k = str.size();
		TrieNode* Lastnode = getchNode(str, k);
		Lastnode->isWord = false;

		while (Lastnode != pRoot)
		{
			Lastnode->count--;
			Lastnode = getchNode(str, --k);
		}
		return true;
	}
	/* ���¸��ڵ��־λ */
	bool updateRoot = false;

	/* ������ַ���ǰ׺��Ӱ���κ�����Ԫ�أ�str[0]��ǰ׺����Ϊ1����ʾɾ�����ʵ�
	 * ·��û��������֧���õ��ʵ����н�㶼��ɾ�����������Ҫ����root�����Ӧ
	 * ��next��
	 */
	if (getPriNum(str.substr(0, 1)) == 1)
	{
		updateRoot = true;
	}

	/* curNode ָ��Trie���ĸ��ڵ� */
	TrieNode* curNode = pRoot;

	/* �Ӻ���ǰ������ɾ���ĵ��� */
	int k = str.size();
	auto it = str.rbegin();
	while (it != str.rend())
	{
		char str_ch = *it;

		/* �õ��ַ�����Ӧ����Ӧ��� */
		TrieNode* delNode = getchNode(str, k--);

		/**
		 * count��Ϊ1���ҵ�ǰ��㲻�Ǹ��ڵ㣬�ͽ��н��ɾ������
		 * ��ע�⣬�������ǲ���������ɾ���ý�㣬������ʹ��delete
		 * ɾ����㣬�������ǽ��ý����Ϊnullptr���ɣ���Ϊ���ǻ�Ҫ
		 * ��֤�´ο��Լ���ʹ�øý�㣬���ұ�֤������������ȷִ��
		 * ��ע�⣬��
		 */
		if (delNode->count == 1 && delNode != pRoot)
		{
			if (updateRoot)
			{
				free(delNode);
			}
			delNode = nullptr;
		}
		/**
		 * ����count��Ϊ1�����ϲ��ϻ��ݽ���Ӧ����count�����һ,
		 * ������ɾ������ǰ׺����count��
		 */
		else
		{
			delNode->count -= 1;
		}
		++it;
	}

	/* ����root���ڵ� */
	if (updateRoot)
	{
		pRoot->next[str[0]] = nullptr;
	}

	return true;
}


TrieTree::~TrieTree()
{
	Destory(pRoot);
}

/* ������ */
void TrieTree::Destory(TrieNode* pRoot)
{
	if (pRoot == nullptr)
		return;

	for (int i = 0; i < MaxBranchNum; i++)
	{
		if (pRoot->next[i] != nullptr)
		{
			/* ���ϵݹ�ؽ����пռ��ͷ� */
			Destory(pRoot->next[i]);
		}
	}

	delete pRoot; /* �ӽڵ�ȫ��ɾ���������ͷŸ��ڵ� */
	pRoot = nullptr;
	return;
}

