#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main() {
	int64_t a = 600851475143;
	int64_t i;

	for (i = 2; i < a/2; ++i ) {
		if ( a % i == 0 ) {
			a /= i--;
		}
	}	

	printf("%ld\n",a);
	return(EXIT_SUCCESS);
}
