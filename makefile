run: all

all: client.o ThreadServer.o
	./server

main.o: main.cpp
	g++ -o main main.cpp 

client.o: client.c
	gcc client.c -o client

ThreadServer.o: ThreadServer.c
	gcc ThreadServer.c -o server -lpthread

