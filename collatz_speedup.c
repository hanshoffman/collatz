#include <stdio.h>
#include <stdlib.h>

const int MAX_NUM = 1000000;
int LOOK_UP[MAX_NUM];

int main(int argc, const char* argv[]) {
	int maxIndex = 0, currIterations = 0, maxIterations = 0;
	unsigned long n;
	
	for (int i=0; i<=MAX_NUM; i++) { LOOK_UP[i] = -1; }
	LOOK_UP[1] = 1;
	
	for (int i=2; i<=MAX_NUM; i++) {
		n = i;
		while (n > 1 && n >= i) {
			currIterations++;
			n = (n % 2 == 0) ? n/2 : 3*n+1;
		}
		LOOK_UP[i] = currIterations + LOOK_UP[n];
		if (LOOK_UP[i] > maxIterations) { maxIterations = LOOK_UP[i]; maxIndex = i; }
		currIterations = 0;
	}

	printf("Starting number: %d\n%d ", maxIndex, maxIndex);
	n = maxIndex;
	while (n > 1) {
		n = (n % 2 == 0) ? n/2 : 3*n+1;
		printf("%lu ", n);
	} printf("\n");
}
