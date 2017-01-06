OPTS= -g -c -Wall -Werror

testrie: Node.o Trie.o Prog3.o Link.o
	 g++ -o testrie  *.o 

Node.o: Node.cc Node.h Link.h	 
	g++ $(OPTS)  Node.cc
Trie.o: Trie.cc Trie.h Link.h Node.h 
	g++ $(OPTS) Trie.cc
Prog3.o: Prog3.cc Trie.h  
	g++ $(OPTS) Prog3.cc 
Link.o: Link.cc Link.h Node.h 
	g++ $(OPTS) Link.cc






clean:
	rm testrie *.o




