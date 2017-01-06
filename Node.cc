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
#include <string>
using namespace std;

Node::Node(){
   value=-1;
   numlinks=0;
   //cout<<"This is two"<<endl;
   nextfew=new Link*[10];
   
}    
 

int Node:: getnumlinks()
  {
    int x=0;
    for(int i=0; i<10; i++)
      {
       	if(nextfew[i]!=NULL)
	  {
	    x++;
	    printf(" %d", i);
          } 
      }
    return x;
  }

 Node:: ~Node()
 {
   /*  for(int i=0; i<10; i++)
    {
      if(nextfew[i]!=NULL)
	{
      delete nextfew[i];
        }
	}*/

   delete[] nextfew;
  }
  
