# variable definition
CC = clang++
CFLAGS = -Werror -Wall

%.o: %.cpp
		$(CC) $(CFLAGS) -o $@ -c $<

all: test_1 test_2 test_3 test_4

test_1: test_1.o course.o
		$(CC) $(CFLAGS) -o test_1.out test_1.o course.o

test_2: test_2.o course.o
		$(CC) $(CFLAGS) -o test_2.out test_2.o course.o

test_3: test_3.o course.o
		$(CC) $(CFLAGS) -o test_3.out test_3.o course.o

test_4: test_4.o course.o
		$(CC) $(CFLAGS) -o test_4.out test_4.o course.o

memcheck: test_1 test_2 test_3
	    valgrind --leak-check=full ./test_1.out ./test_2.out ./test_3.out ./test_4.out

clean:
		rm -f *.o *.out

.PHONY: all memcheck clean