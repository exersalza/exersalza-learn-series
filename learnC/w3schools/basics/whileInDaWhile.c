#include <stdio.h>

void main() {
	int i = 0;
	// this is an conventional while loop
	while (i != 5) {
		printf("%d\n", i);
		i++;
	}

	// this is a do-while loop
	// the condition is evaluated at the end of the loop
	do {
		printf("%d\n", i);
		i++;
	} while (i != 5);
}
