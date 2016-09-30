#ifndef LINK_H
#define LINK_H
#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
class Node; //do not include node.h
class Link{
public:
Link();
char member;
Node* next;
void setMember(char y);
  ~Link();
};
#endif
