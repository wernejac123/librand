CC=gcc
CFLAGS=-g -Wall -Werror -Wextra -Wconversion -O2
INCLUDEDIR=/usr/local/include
LIBDIR=/usr/local/lib

all: rand.o
	$(CC) -shared $(CFLAGS) -o librand.so rand.o

rand.o:
	$(CC) -c $(CFLAGS) rand.c

install:
	install rand.h $(INCLUDEDIR)
	install librand.so $(LIBDIR)
	strip -s $(LIBDIR)/librand.so

uninstall:
	rm  $(INCLUDEDIR)/rand.h
	rm $(LIBDIR)/librand.so

clean:
	rm *.o *.so
