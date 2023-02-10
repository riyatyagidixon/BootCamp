CC=gcc

%.o: %.c
	$(CC) -c -o $@ $<

add_matrix: add_matrix.o
	$(CC) -o add_matrix add_matrix.o

multi_matrix: multi_matrix.o
	$(CC) -o multi_matrix multi_matrix.o

clean:
	rm -rf *.o add_matrix multi_matrix

all: add_matrix multi_matrix
