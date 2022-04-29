#include <stdio.h>

// For performance and structure we can define the function declaration at the begining
// and the function definition at the end of the file.

void myFunction();
void myFunction2(int, int);

int main() {
	myFunction();
}

void myFunction() {
	printf("Hello World!\n");
}

void myFunction2(int a, int b) {
	printf("%d\n", a + b);
}
