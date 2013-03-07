#include <stdlib.h>
#include <stdio.h>

int main() {
	int d, m, y;
	int sum=0;
	int dow=1;
	d = 1;
	m = 1;
	y = 1900;

	while(  y < 2001 ) {
		
		++d;
		++dow;

		if ( dow > 7 ) dow = 1;
 
		if (m == 4 || m == 6 || m == 9 || m == 11 ) { // 30 days
			if ( d > 30 ) {
				d = 1;
				++m;
			}
		}
		else if ( m == 2) { // 28 days or 29 days on leap years
			if ( y % 4 == 0 ) {
				if ( d > 29 ) {
					d = 1;
					++m;
				}
			} else {
				if ( d > 28 ) {
					d = 1;
					++m;
				}
			}
		}
		else {
			if ( d > 31 ) {
				d = 1;
				++m;
			}
		}
	

		if ( m > 12 ) {
			m = 1;
			++y;
		}
		printf( "%d %d %d %d\n", y, m, d, dow);
		if ( y >= 1901 && d == 1 && dow == 7 ) ++sum;

	
	}

	printf("%d\n", sum);
	return(EXIT_SUCCESS);	
}
