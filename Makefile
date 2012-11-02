CC=g++
CFLAGS=-c -Wall

all: pi

fractal: pi.o
	$(CC) pi.o -o pi

pi.o: pi.cpp
	$(CC) $(CFLAGS) pi.cpp
   
clean:
	rm -rf *o pi
