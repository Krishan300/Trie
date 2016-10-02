#include <iostream>
#include <stdio.h>
#include <cstdlib>


#include "Trie.h"

int main()
{
  Trie t = Trie();
   t.put("LEHIGH", 1);
  // t.put("LEMON", 1);
  t.get("LEHIGH");
  t.get("LEMON");
  // t.get("LEMON");


}
