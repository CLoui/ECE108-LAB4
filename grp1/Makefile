# Group 1 Makefile
# Created By: Morgan Gallant and Nirosh Ratnarajah

CC = g++
SRCS = Mean.cpp testMean.cpp
OPTS = -std=c++11
BIN_OUT = grp1

all: test

build:
	$(CC) $(OPTS) -o $(BIN_OUT) $(SRCS)
clean:
	rm -f $(BIN_OUT)
test: build
	./$(BIN_OUT)
