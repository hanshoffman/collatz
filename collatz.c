#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

const int MAX_NUM = 10;

int main(int argc, const char* argv[]) {
	int i = MAX_NUM, j, currCount = 0, maxCount;
	
	clock_t startTime = clock();
	while (i > 0) {
		j = i;
		currCount = 0;
		printf("%i ", j);
		while (j > 1) {	
			if (j % 2 == 0) {
				j = j / 2;
			} else {
				j = 3*j + 1;
			}
			// shortcut... x=(x%2) ? 3*x+1 : x/2
			currCount++;
			printf("%i ", j);
		}
	
		if (currCount > maxCount) maxCount = currCount;
		printf(":%i\n\n", maxCount);
		i--;
	}
	clock_t endTime = clock();
	printf("\nTime elapsed: %f ms", (float) (endTime - startTime)/(CLOCKS_PER_SEC/1000));
}

//https://hbfs.wordpress.com/2012/05/01/faster-collatz/
//http://www.ericr.nl/wondrous/techpage.html
//http://gribblelab.org/CBootcamp/A2_Parallel_Programming_in_C.html
