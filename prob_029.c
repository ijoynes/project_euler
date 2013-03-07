#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
	int a, b, sqrtb,i;
	b = 81;
	sqrtb = sqrt(b);
	for ( i = 2; i < sqrtb; ++i ) {
		if ( b % i == 0 ) {
			printf("%d\n", i);
			b /= i--;
		}	
	}
	return(EXIT_SUCCESS);
}
