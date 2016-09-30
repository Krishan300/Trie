/*
  CSE 109
  Krishan Madan
  krm219
  Program Description: Creates a Node data structure
  Program #3
*/

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Node.h"
#include "Link.h"
using namespace std;

Node::Node(){
  value=0;
  numlinks=0; 
  nextfew=new Link*[10];
}  
  
 

  int Node:: getnumlinks()
  {
    int x=0;
    for(int i=0; i<10; i++)
      {
       	if(nextfew[i]->member!=' ')
	  {
	    x++; 
          } 
      }
    return x;
  }

 Node:: ~ Node()
 {
  for(int i=0; i<10; i++)
    {
      delete nextfew[i];
    }
  }
  
