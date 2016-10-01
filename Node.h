
#ifndef NODE_H
#define NODE_H
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Link.h"
#include <string>
using namespace std;
class Node {
public:
  Node();
  int value;
  int numlinks;
   Link **nextfew;
  int getnumlinks() ;
  ~Node();
};
#endif  
