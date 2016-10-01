
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
#include <string>
#include "Node.h"
#include "Link.h"
#include "Trie.h"

using namespace std;
int z=0;
Trie::Trie(){
  first=new Node();
  
  
 }


void Trie :: put(string key, int placed)
 {
  
   
   
   for( int i=0; i<(int)key.length(); i++)
   {
     bool valisfound=false;
     
    
       
     for(int x=0; x<first->numlinks;x++)//inner loop-skips
       {
         
	  valisfound=false;

	 if( first->nextfew[x]->member==key[i])
	 {
	   
	   first=(*first).nextfew[x]->next;
	   
	   valisfound=true;
	 }

       }
     // cout<<"Check for error"<<endl;
      if(valisfound==false)
	{
          first->nextfew[first->numlinks]=new Link();
	  // cout<<"Link made"<<endl;
	  // cout << first->getnumlinks() << endl;
	   
	   first->nextfew[first->numlinks]->setMember(key[i]);

	   //	   cout<< first->nextfew[first->numlinks]->member <<endl;

	   first->numlinks=first->numlinks+1;
	   
	   
	   // cout<<first->nextfew[first->numlinks-1]->member<<endl;
	   cout<<first->value<<endl;
	   cout<<first->numlinks<<endl;
	   Node *currentNode=new Node();

	   if(i==(int)(key.length()-1))
	     {
	       currentNode->value=placed;
	       // cout<<z<<endl;
	     }
	   else
	     {
	       currentNode->value=0;
	     }
	   first->nextfew[first->numlinks-1]->next=currentNode;
	   first=(*first).nextfew[first->numlinks-1]->next;
	   // cout<<first->nextfew[first->numlinks-1]->member<<endl;
	   
	   // cout<<first->numlinks<<endl;
	   // cout<<first->value<<endl;
	   // z+=2;
	   // cout<<z<<endl;
	 }
   }
 }
 
   

   int Trie:: get(string key)
   {
      int retvalue=0;
      
     for(int i=0; i<(int)key.length(); i++)
     {
       bool foundmatch=false;
       cout<<key[i]<<endl;
       for(int x=0; x<first->numlinks; x++)
       {
	 // cout<<x<<endl;
	  if(first->nextfew[x]->member==key[i])
	   {
	     // cout<<first->nextfew[x]->member<<endl;
	     foundmatch=true;
	     //cout<<foundmatch<<endl;
	    first=first->nextfew[x]->next;
	    break;
	    }
       }
             if(foundmatch==false)
	    {
	      retvalue=-1;
	      break;
	    }
   
    
     }
     return retvalue; 
   }

Trie:: ~Trie()
{
  if(first!=NULL){  
  delete first;
  }
}
