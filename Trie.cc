
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
#include <cstring>
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
   
   // storage=new Node*[key.length()+1];  
   Node* currentNode=first;  
   
   for( int i=0; i<(int)key.length(); i++)
   {
     bool valisfound=false;
     
    
       
     for(int x=0; x<currentNode->numlinks;x++)//inner loop-skips
       {
         
	  valisfound=false;

	 if(currentNode->nextfew[x]->member==key[i])
	 {
	   
	   currentNode=(*currentNode).nextfew[x]->next;
	   
	   valisfound=true;
	 }

       }
     // cout<<"Check for error"<<endl;
      if(valisfound==false)
	{
          currentNode->nextfew[currentNode->numlinks]=new Link();
	  // cout<<"Link made"<<endl;
	  // cout << first->getnumlinks() << endl;
	   
	   currentNode->nextfew[currentNode->numlinks]->setMember(key[i]);

	   //	   cout<< first->nextfew[first->numlinks]->member <<endl;

	  currentNode->numlinks=currentNode->numlinks+1;
	   
	   
	   // cout<<first->nextfew[first->numlinks-1]->member<<endl;
	   
	   Node *newn=new Node();

	   if(i==(int)(key.length()-1))
	     {
	       newn->value=placed;
	       // storage[i+1]=new Node();
		// storage[i+1]=currentNode;
	       // out<<"This is last node"<<endl;
	       //	cout<<storage[i+1]->value<<endl;
	       //	cout<<storage[i+1]->numlinks<<endl;
	     }
	   else
	     {
	       newn->value=0;
	     }
	   // storage[i]=new Node();
	   // storage[i]=first;
	   // cout<<storage[i]->value<<endl;
	   // cout<<storage[i]->numlinks<<endl;
	   currentNode->nextfew[currentNode->numlinks-1]->next=newn;
	   
	   //cout<<first->numlinks<<endl;
	   // cout<<currentNode->value<<endl;
	   // cout<<currentNode->numlinks<<endl;
	   currentNode=(*currentNode).nextfew[currentNode->numlinks-1]->next;
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
      int retvalue;
      // first=storage[0];
     bool foundmatch;
     for(int i=0; i<(int)key.length(); i++)
     {
       foundmatch=false;
       // cout<<key[i]<<endl;
	// cout<<first->value<<endl;
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
	      retvalue= -1;
	    }
   
	     // return retvalue;
     }
     if(foundmatch==true)
       {
	 retvalue= 0;
       }
     cout<<retvalue<<endl;
     return retvalue;
   }

Trie:: ~Trie()
{
  if(first!=NULL){  
  delete first;
  }
  
}
