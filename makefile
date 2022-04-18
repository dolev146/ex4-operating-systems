run: all

all: client.o ThreadServer.o main.o stack.o
	./main

main.o: main.cpp
	g++ -o main main.cpp 

client.o: client.cpp
	g++ client.cpp -o client

ThreadServer.o: ThreadServer.cpp
	g++ ThreadServer.cpp -o server -lpthread

stack.o: stack.cpp stack.hpp
	g++ stack.cpp -c

