#include<iostream>
#include"myhead.h"
#include<cstring>
using namespace std;

int main() {
	TrieTree* trie = new TrieTree();
	string str[] = { "zyzmzm","z","ab","zy","zi","abcd","zhaoyang" };
	for (string str : str)
		trie->insert(str);
	//xxxxxxxxxxxx
	return 0;
}