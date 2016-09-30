OPTS= -g -c -Wall -Werror

testrie: Node.o Trie.o Prog3.o Link.o
	 g++ -o testrie  *.o 

Node.o: Node.cc Node.h Link.h Link.cc	 
	g++ $(OPTS)  Node.cc
Trie.o: Trie.cc Trie.h Link.cc Link.h Node.cc Node.o 
	g++ $(OPTS) Trie.cc
Prog3.o: Prog3.cc Trie.cc Trie.h  
	g++ $(OPTS) Prog3.cc 
Link.o: Link.cc Link.h Node.h Node.cc
	g++ $(OPTS) Link.cc






clean:
	rm testrie *.o




