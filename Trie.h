#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Node.h"
#include "Link.h"
using namespace std;
 
class Trie{
 public:
 Node *first;
  
 Trie();
 
 void put(string key, int placed);
 int get(string key);
  ~Trie();
};

#endif
