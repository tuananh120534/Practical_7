#ifndef TRIENODE_H
#define TRIENODE_H
#include <unordered_map>

struct TrieNode {
  bool isEndOfWord = false;
  std::unordered_map<char,TrieNode*> children;
};
#endif