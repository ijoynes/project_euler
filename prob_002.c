#include <stdlib.h>
#include <stdio.h>

int main() {
	int a = 1;
	int b = 1;
	int c = 0;
	int sum = 0;
	int i = 2;
	while(c <= 4000000) {
		++i;
		c = b + a;
		printf("%d) %d\n", i, c);
		if (c <= 4000000)
			sum += c;
		
		a = c + b;
		b = a + c;
	}

	printf("%d\n", sum);
	return(EXIT_SUCCESS);
}
