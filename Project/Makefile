CC = g++ -g


all: main

main: main.o
	$(CC) main.o -o main

main.o: main.cpp Bitacora.h
	$(CC) -c main.cpp

clean:
	rm -f main main.o