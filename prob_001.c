#include <stdlib.h>
#include <stdio.h>

int main() {
	int sum = 0;
	int i = 0;
	int N = 1000;

	for (i = 0; i < N; i+=3) {
		sum += i;
	}

	for (i = 0; i < N; i+=5) {
		sum += i;
	}

	for (i = 0; i < N; i+=15) {
		sum -= i;
	}

	printf("%d\n", sum);

	return(EXIT_SUCCESS);
}
