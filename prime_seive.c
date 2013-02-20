#include <stdio.h>
#define LIM 100

int main(void)
{
	int i;
	int j;
	int prime[LIM];
 	
 	//Initialize all elemts of array to true.
	for (i = 2; i < LIM; i++) {
		prime[i] = 1;
	}

	//From 2 to LIM, if prime[i] is true,
	//cross out every multiple of that number. Do this from 2 to 100.
	for (i = 2; i < LIM; i++) {
		if (prime[i]) {
			for (j = i; i * j < LIM; j++) {
				prime[i * j] = 0;
			}
		}
	}

	//If prime are true (which by this point are),
	//Print them out or else don't.
	for (i = 2; i < LIM; i++) {
		if (prime[i]) {
			printf("%d\t", i);
		}
	}

	return 0;
}