/*
  CSE 109
  Krishan Madan
  krm219
  Program Description: A Trie data structure
  Program #3
*/
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include "Node.h"
#include "Link.h"
#include "Trie.h"

using namespace std;

Trie::Trie(){
  first=new Node();
 }


void Trie :: put(string key, int placed)
 {
  
   
   for( int i=0; i<(int)key.length(); i++)
   {
       
      for(int x=0; x<first->numlinks;x++)
       {
         
	 if((*first).nextfew[x]->member==key[i])
	 {
	   first=(*first).nextfew[x]->next;
	 }

       }
       	 
      if((*first).nextfew[first->numlinks]->member!=key[0])
         {
	   
	   (*first).nextfew[first->numlinks]->setMember(key[i]);
	   Node currentNode;
	   if(i==(int)(key.length()-1))
	     {
	       currentNode.value=placed;
	     }
	   (*first).nextfew[first->numlinks]->next=&currentNode;
	   first=(*first).nextfew[first->numlinks]->next;
	 }
   }
 }
 
   

   int Trie:: get(string key)
   {
     bool foundmatch=true;
     int y=0;
     int retvalue=0;
     while(foundmatch==true)
     {
     for(int i=0; i<(int)key.length(); i++)
     {
      
      
       for(int x=0; x<first->numlinks; x++)
       {
	  
	  if(first->nextfew[x]->member==key[i])
	   {
	      y=1;
	      first=first->nextfew[x]->next;
	      
	    }
	  }
	    if(y==0)
	      {
		foundmatch=false;	     
	      
	      }  
	}
     }
         
                         
     if(foundmatch==false)
       {
	 retvalue= -1;
       }
     if(foundmatch==true)
       {
	 retvalue= 0;
       }  
     return retvalue;
   }

Trie:: ~Trie()
{
  
  delete first;
}
