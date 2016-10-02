#ifndef TRIE_H
#define TRIE_H
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include <cstring>
#include "Node.h"
#include "Link.h"
using namespace std;
 
class Trie{
 public:
 Node *first;
  // Node **storage;
  // Node *temp;  
 Trie();
 
 void put(string key, int placed);
 int get(string key);
  ~Trie();
};

#endif
