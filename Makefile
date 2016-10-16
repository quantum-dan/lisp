CC=clang
CFLAGS=-I.
DEPS = parse.h syntax.h tokens.h output.h
OBJ = parse.o syntax.o tokens.o output.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lisp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
