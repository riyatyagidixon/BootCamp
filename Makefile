CC=gcc
CFLAGS=-I.
DEPS = hellomake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

pp-sw: hellomake.o hellofunc.o 
	$(CC) -o pp-sw hellomake.o hellofunc.o
