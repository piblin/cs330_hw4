CC = gcc
CFLAGS = -Wall -Werror -std=c99

all: asgn2

asgn2: asgn2.c asgn2.h
	$(CC) $(CFLAGS) asgn2.c -o asgn2

run: asgn2
	./asgn2

clean:
	rm -f asgn2