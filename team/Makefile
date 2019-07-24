# Team Makefile

CC = g++
INCLUDES = -I../grp1 -I../grp2
OPTS = -std=c++11
SRCS = calculate.cpp shared.cpp ../grp1/Mean.cpp ../grp2/Median.cpp
BIN_NAME = team

all:
	$(CC) $(INCLUDES) $(OPTS) -o $(BIN_NAME) $(SRCS)
clean:
	rm -f $(BIN_NAME)
