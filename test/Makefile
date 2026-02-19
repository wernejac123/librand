CC=gcc
CFLAGS=-g -Wall -Werror -Wextra -Wconversion

all:
	#set LD_LIBRARY_PATH=/usr/local/lib
	ldconfig
	$(CC) $(CFLAGS) test.c -o test -L/usr/local/lib -I/usr/local/include -lrand
	strip -s test
