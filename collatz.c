#include <stdio.h>
#include <stdlib.h>

const int MAX_NUM = 1000000;

int main(int argc, const char* argv[]) {
	int maxIndex = 0, currIterations = 1, maxIterations = 0;
	for (int i=2; i<=MAX_NUM; i++) {
		unsigned long n = i;
		while (n > 1) {
			currIterations++;
			n = (n % 2 == 0) ? n/2 : 3*n+1;
			if (currIterations > maxIterations) { maxIterations = currIterations; maxIndex = i; };
		}
		currIterations = 1;
	}
	
	printf("%d\n%d ", maxIndex, maxIndex);
	unsigned long j = maxIndex;
	while (j > 1) {
		j = (j % 2 == 0) ? j/2 : 3*j+1;
		printf("%lu ", j);
	}
}
//https://hbfs.wordpress.com/2012/05/01/faster-collatz/
//http://www.ericr.nl/wondrous/techpage.html
//http://gribblelab.org/CBootcamp/A2_Parallel_Programming_in_C.html
//http://www.mathblog.dk/project-euler-14/
//http://code.jasonbhill.com/c/project-euler-problem-14/
