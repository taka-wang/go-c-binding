# written by taka

CC=gcc
CFLAGS=
OBJS=test.o
all:test


test.o: test.c 
	$(CC) -c -fPIC test.c -o $(OBJS)

test: $(OBJS)
	$(CC) -shared -o libtest.so test.o
	go build -o test test.go

clean:
	@echo "Clean..."
	rm -f *.o *.so test
