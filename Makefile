CC=gcc
CFLAGS=-Wall -std=c99
LDFLAGS=-lm

all: biggest_number_of_array bubblesort prime_seive sine

biggest_number_of_array: biggest_number_of_array.o

bubblesort: bubblesort.o

prime_seive: prime_seive.o

sine: sine.o

clean:
	$(RM) *.o biggest_number_of_array bubblesort prime_seive sine

.PHONY: all clean
