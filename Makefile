CC=clang
CFLAGS=-I.
DEPS = parse.h
OBJ = parse.o main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

lisp: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
