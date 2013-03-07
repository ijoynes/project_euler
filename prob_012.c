#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <math.h>

int main() {
	int n = 1;
	int64_t Tn, sqrtTn;
	int nDiv, i;
	do {
		++n;
		nDiv = 0;
		Tn = n*(n+1)/2;
		sqrtTn = sqrt(Tn);
		for ( i = 1; i < sqrtTn; ++i ) {
			if ( Tn % i == 0) nDiv += 2;
		}
	} while(nDiv <= 500);
	printf("%ld\n",Tn); 
	return(EXIT_SUCCESS);
}
