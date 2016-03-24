#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#include <omp.h>

const int MAX_NUM = 1000000;

int main(int argc, const char* argv[]) {
	int i = MAX_NUM, j, currStep = 0, maxSteps, maxIndex;
	
	clock_t startTime = clock();
	while (i > 0) {
		j = i, currStep = 0;
		while (j > 1) {	
			j = (j % 2 == 0) ? j/2 : 3*j+1;
			currStep++;
		}
	
		if (currStep > maxSteps) maxSteps = currStep, maxIndex = i;
		i--;
	}
	clock_t endTime = clock();
	printf("maxIndex:%i, maxSteps:%i\n", maxIndex, maxSteps);
	printf("Time elapsed: %f ms", (float) (endTime - startTime)/(CLOCKS_PER_SEC/1000));
}

//https://hbfs.wordpress.com/2012/05/01/faster-collatz/
//http://www.ericr.nl/wondrous/techpage.html
//http://gribblelab.org/CBootcamp/A2_Parallel_Programming_in_C.html
