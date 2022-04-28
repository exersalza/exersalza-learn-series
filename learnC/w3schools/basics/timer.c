#include <stdio.h>
#include <time.h>

int main() {
	clock_t t;
	t = clock();
	for (int i = 0; i < 1000000; i++) {
		int a = i;
	}
	t = clock() - t;
	double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
	printf("%f\n", time_taken);
	return 0;
}

