#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define N 2000000

int main() {
	int i, j;
	int64_t sum = 0;
	int isPrime[N] = {0};
	int sqrtN = sqrt(N);

	for ( i = 1; i < N; ++i ) {
		isPrime[i] = 1;
	}

	for ( i = 2; i <= sqrtN; ++i ) {
		if ( isPrime[i-1] == 1 ) {
			for ( j = i*i; j <= N; j += i ) {
				isPrime[j-1] = 0;
			}	
		}
	}

	for ( i = 1; i <= N; ++i ) {
		if (isPrime[i-1] == 1) sum += i; 
	}

	printf("%ld\n", sum);
	return(EXIT_SUCCESS);
}
