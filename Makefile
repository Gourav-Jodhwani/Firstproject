CC = gcc
CFLAGS = 
LIB =

all: main
hello:
	$(CC) $(CFLAGS) -c hello.c
mymath:
	$(CC) $(CFLAGS) -c mymath.c
main:hello mymath
	$(CC) $(CFLAGS) mymath.o hello.o main.c -o main
run:
	./main
clean:
	rm main