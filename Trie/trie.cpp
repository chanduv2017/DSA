#include <bits/stdc++.h>
using namespace std;

struct TrieNode
{
  TrieNode *child[26];
  bool isEnd;

  TrieNode()
  {
    isEnd = false;
    for (int i = 0; i < 26; i++)
    {
      child[i] = NULL;
    }
  }
};

class Trie
{
  TrieNode *root;
  bool search(string &key)
  {
    TrieNode *curr = root;
    for (int i = 0; i < key.length(); i++)
    {
      int index = key[i] - 'a';
      if (!curr->child[index])
        return false;
      curr = curr->child[index];
    }
    return curr->isEnd;
  }

  void insert(string &key)
  {
    TrieNode *curr = root;
    for (int i = 0; i < key.length(); i++)
    {
      int index = key[i] - 'a';
      if (!curr->child[index])
      {
        curr->child[index] = new TrieNode();
      }
      curr = curr->child[index];
    }
    curr->isEnd = true;
  }

  TrieNode *delKey(TrieNode *root, string &key, int i)
  {
    if (root == NULL)
      return NULL;
    if (i == key.length())
    {
      root->isEnd = false;
      if (isEmpty(root) == true)
      {
        delete (root);
        root = NULL;
      }
      return root;
    }
    int index = key[i] - 'a';
    root->child[index] = delKey(root->child[index], key, i + 1);
    if (isEmpty(root) && root->isEnd == false)
    {
      delete (root);
      root = NULL;
    }
    return root;
  }

  bool isEmpty(TrieNode *root)
  {
    for (int i = 0; i < 26; i++)
    {
      if (root->child[i] != NULL)
        return false;
    }
    return true;
  }
};

