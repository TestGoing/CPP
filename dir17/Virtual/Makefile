CC=g++
CPPFLAGS=-g -std=gnu++11 -Wall
BIN=TestVirtualFunc

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all:$(OBJ)
	$(CC) -o $(BIN) $^

%.o:%.cpp
	$(CC) -c $< -o $@ $(CPPFLAGS)

clean:
	rm -f *.o
	rm $(BIN)
