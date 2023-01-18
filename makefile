CC = gcc
FLAGS = -Wall -g
.PHONY: clean all

graph: main.o libgraph.a
	$(CC) $(FLAGS) -o graph main.o libgraph.a

main.o: main.c graph.h 
	$(CC) $(FLAGS) -c main.c 

algo.o: algo.c graph.h
	$(CC) $(FLAGS) -c algo.c

graph.o: graph.c graph.h
	$(CC) $(FLAGS) -c graph.c

libgraph.a: algo.o graph.o
	ar -rcs libgraph.a algo.o graph.o

all: graph
clean: 
	rm -f *.o *.a graph