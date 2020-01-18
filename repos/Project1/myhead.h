#pragma once
#include<string>
using namespace std;
/**
 * 定义每个子树的最大分支数目 a - Z  65 - 122
 * 我们实现的Trie树存储是string类型的单词，那么它包括大写和小写字母
 * 为了提高代码的可读性，我们直接将对应的单词直接存储到其ascll值的位置，
 * 但是注意的是，这并不是最优的方法，一般来说，我们为了节省空间，都会充分
 * 利用存储空间进行元素存储，例如，应将小写a存储在 a - 'a'的位置。
 */
const int MaxBranchNum = 123;

/**
 * Trie树节点定义
 */
class TrieNode
{
public:
	/* 单词完整标志位 */
	bool isWord;
	/* 结点存储的字符 */
	char word;
	/* 有多少单词通过这个节点,即由根至该节点组成的字符串模式出现的次数 */
	int count;
	/* next数组存储所有的子节点 */
	TrieNode* next[MaxBranchNum];
public:
	/* 结点初始化 */
	TrieNode(char word = 0)
	{
		this->word = word;
		isWord = false;
		count = 1; // 每个字符初始化就算一个前缀了
		memset(next, 0, sizeof(next)); // 子节点初始化
	}
};

/**
 * Trie树的结构定义
 */
class TrieTree {
	TrieNode* pRoot;
public:
	/* Trie树的初始化 */
	TrieTree()
	{
		pRoot = new TrieNode();
	}

	/* Trie树的析构 - 调用销毁函数销毁树，释放所有内存 */
	~TrieTree()
	{
		Destory(pRoot);
	}

	/* 销毁函数 */
	void Destory(TrieNode* pRoot);

	/* 插入函数 - 插入单词 */
	void insert(string str);

	/* 删除函数 - 删除单词*/
	bool remove(string str);

	/* 查询函数 - 查询完整单词 */
	bool search_Str(string str);

	/* 前缀搜索 - 查询指定前缀 */
	bool priSearch_str(string str);

	/* 前缀次数搜索 - 查询指定前缀出现的次数 */
	int getPriNum(string str);

	/* 辅助函数（删除操作使用） - 获取第k个位置所在的结点 */
	TrieNode* getchNode(string str, int k);
};