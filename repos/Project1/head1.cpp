
#include"myhead.h"
#include<string>
using namespace std;
/* 析构函数 */

void TrieTree:: insert(string str)
{
	if (str.length() == 0 || search_Str(str))
		return;

	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;

	/* 遍历待插入单词的每个字符，并进行插入 */
	for (char str_ch : str)
	{
		/* 在路径中该字符结点存在，更新count域，继续向子节点遍历 */
		if (curNode->next[str_ch] != nullptr)
		{
			curNode = curNode->next[str_ch];
			curNode->count++;
		}
		/**
		 * 在路径中该字符结点不存在，为该字符创建新的结点，
		 * 并继续向子节点遍历
		 */
		else
		{
			TrieNode* newNode = new TrieNode(str_ch);
			curNode->next[str_ch] = newNode;
			curNode = curNode->next[str_ch];
		}
	}
	/* 单词插入完成后，该结点的完整标志位置为true */
	curNode->isWord = true;
}

bool TrieTree::search_Str(string str)
{
	if (str.length() == 0)
	{
		return false;
	}
	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;
	/* 遍历指定查询单词的每个字符，并进行插入 */
	for (char str_ch : str)
	{
		/* 当前结点不为空，则curNode继续走向子节点匹配下个字符 */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}

	/* 若当前结点不为空并且其单词完整标志位为true，则表示单词存在。*/
	return (curNode != nullptr && curNode->isWord);
}

bool TrieTree::priSearch_str(string str)
{
	if (str.length() == 0)
	{
		return false;
	}
	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;
	/* 遍历指定前缀的每个字符，并进行插入 */
	for (char str_ch : str)
	{
		/* 当前结点不为空，则curNode继续走向子节点匹配下个字符 */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* 若当前结点不为空，则表示前缀是存在的，返回true。*/
	return (curNode != nullptr);
}

int TrieTree::getPriNum(string str)
{
	if (str.length() == 0)
	{
		return 0;
	}
	/* 如果该前缀没有出现过，直接返回0 */
	if (!priSearch_str(str))
		return 0;
	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;

	for (char str_ch : str)
	{
		/* 当前结点不为空，则curNode继续走向子节点匹配下个字符 */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* 直接返回当前结点的count */
	if (curNode != nullptr)
		return curNode->count;
	return 0;
}

TrieNode* TrieTree::getchNode(string str, int k)
{
	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;

	for (char str_ch : str)
	{
		/* 遍历到第k个元素直接跳出循环 */
		if (k-- == 0)
			break;

		/* 当前结点不为空，则curNode继续走向子节点匹配下个字符 */
		if (curNode != nullptr)
		{
			curNode = curNode->next[str_ch];
		}
	}
	/* 返回第k个字符所在的结点 */
	return curNode;
}

bool TrieTree::remove(string str)
{
	/* 通过search_Str查询函数判断Tire树中是否存在str 不存在返回false */
	if (str.length() == 0 || !search_Str(str))
	{
		return false;
	}

	/**
	* 如果以str为前缀的单词个数超过1，那么我们并不是真正删除该单词
	 * 而是只是该单词最后一个字符的isword域置false，表示它将不再
	 * 是个完整单词。但是其他单词是以它为前缀的，仍然存在于Trie树中
	 * 请注意，我们还需要向上回溯到根，更新每个结点的count成员
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
	/* 更新根节点标志位 */
	bool updateRoot = false;

	/* 如果该字符的前缀不影响任何其他元素，str[0]的前缀次数为1，表示删除单词的
	 * 路径没有其他分支，该单词的所有结点都将删除，但是最后要更新root结点相应
	 * 的next域
	 */
	if (getPriNum(str.substr(0, 1)) == 1)
	{
		updateRoot = true;
	}

	/* curNode 指向Trie树的根节点 */
	TrieNode* curNode = pRoot;

	/* 从后向前遍历待删除的单词 */
	int k = str.size();
	auto it = str.rbegin();
	while (it != str.rend())
	{
		char str_ch = *it;

		/* 拿到字符所对应的相应结点 */
		TrieNode* delNode = getchNode(str, k--);

		/**
		 * count域为1并且当前结点不是根节点，就进行结点删除操作
		 * 请注意，这里我们不能真正的删除该结点，即不能使用delete
		 * 删除结点，而仅仅是将该结点置为nullptr即可，因为我们还要
		 * 保证下次可以继续使用该结点，并且保证析构函数的正确执行
		 * 请注意，当
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
		 * 否则count域不为1则向上不断回溯将相应结点的count的域减一,
		 * 即更新删除结点的前缀结点的count域
		 */
		else
		{
			delNode->count -= 1;
		}
		++it;
	}

	/* 更新root根节点 */
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

/* 销毁树 */
void TrieTree::Destory(TrieNode* pRoot)
{
	if (pRoot == nullptr)
		return;

	for (int i = 0; i < MaxBranchNum; i++)
	{
		if (pRoot->next[i] != nullptr)
		{
			/* 不断递归地将所有空间释放 */
			Destory(pRoot->next[i]);
		}
	}

	delete pRoot; /* 子节点全部删除后便可以释放根节点 */
	pRoot = nullptr;
	return;
}

