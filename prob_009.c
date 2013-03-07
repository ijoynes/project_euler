#include <stdlib.h>
#include <stdio.h>

#define N 1000

int main() {
	int a, b, c;
	int isDone = 0;
	for ( a = 1; a < N-2; ++a ) {
		for ( b = N-2-a; b > a; --b ) {
			c = N - a - b;
			if ( a*a + b*b == c*c ) {
				isDone = 1;
				break;
			}
		}
		if ( isDone == 1) break;
	}

	printf("%d\n", a*b*c);
	return(EXIT_SUCCESS);
}
