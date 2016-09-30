/*
  CSE 109
  Krishan Madan
  krm219
  Program Description: Node.h file
  Program #3
*/


#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include  "Link.h"
#include "Node.h"
Link::Link(){
  member=' ';
  next=new Node();
}
Link:: ~Link(){
  delete next;
}

void Link:: setMember(char y)
{
 member=y;
 }
  
  
