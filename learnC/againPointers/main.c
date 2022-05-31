#include <stdio.h>

int main() {
	int a = 5;
	int *P = &a;

	printf("%p", *P);
	return 0;
}
