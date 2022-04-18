run: all

all: client.o ThreadServer.o main.o Stack.o
	./main

main.o: main.cpp
	g++ -o main main.cpp 

client.o: client.cpp
	g++ client.cpp -o client

ThreadServer.o: ThreadServer.cpp
	g++ ThreadServer.cpp -o server_thread -lpthread

Stack.o: Stack.cpp Stack.hpp
	g++ Stack.cpp -c

server.o:server.cpp
	g++ server.cpp -o server

