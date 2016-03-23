#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char* argv[]) {
	int n = atoi(argv[1]);
	printf("%i\n", n);

	printf("%i ", n);
	clock_t startTime = clock();
	while (n != 1) {
		if (n % 2 == 0) {
			n = n / 2;
		} else {
			n = (n + n + n) + 1;
		}
	
		printf("%i ", n);
	}
	clock_t endTime = clock();
	printf("\nElapsed time: %f seconds", (double) (endTime - startTime)/CLOCKS_PER_SEC));
}
