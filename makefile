CFLAGS = -Wall
CC = gcc

OBJDIR = objects
BINDIR = bin
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, $(OBJDIR)/%.o, $(SRC))

all: binfolder objfolder bin/main

bin/main: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@

binfolder: 
	mkdir -p $(BINDIR)

objfolder:
	mkdir -p $(OBJDIR)

objects/main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

run:
	./bin/main

.PHONY: clean

clear:
	rm bin/* objects/*
	rmdir bin objects