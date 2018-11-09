CC=g++
CPPFLAGS=-g -std=gnu++11 -Wall
BIN=2107

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all:$(OBJ)
	$(CC) -o $(BIN) $^

%.o:%.cpp
	$(CC) -c $< -o $@ $(CPPFLAGS)

clean:
	rm -f *.o
	rm $(BIN)
