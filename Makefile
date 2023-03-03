PROG=main.exe
CC=gcc
CFLAGS=-g -Wall -Werror
DEPS = uppg1.h
OBJ = main.o uppg1.o
 
%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
 
$(PROG): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)