all: main.o

main.o: main.cpp
	g++ -o main main.cpp 