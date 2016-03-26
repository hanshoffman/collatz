#include <stdio.h>
#include <stdlib.h>

const int MAX_NUM = 1000000;

int main(int argc, const char* argv[]) {
	int maxIndex = 0, currIterations = 1, maxIterations = 0;
	unsigned long n;

	for (int i=2; i<=MAX_NUM; i++) {
		n = i;
		while (n > 1) {
			currIterations++;
			n = (n % 2 == 0) ? n/2 : 3*n+1;
			if (currIterations > maxIterations) { maxIterations = currIterations; maxIndex = i; }
		}
		currIterations = 1;
	}
	
	printf("Starting number: %d\n%d ", maxIndex, maxIndex);
	n = maxIndex;
	while (n > 1) {
		n = (n % 2 == 0) ? n/2 : 3*n+1;
		printf("%lu ", n);
	}
}
