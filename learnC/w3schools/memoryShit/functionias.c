#include <stdio.h>

int main() {
	printHello();
	myFunction("Liam");
	return 0;
}

void printHello() {
	printf("Hello, World!\n");
}

// Functions with parameters
void myFunction(char name[]) {
	printf("Hello, %s!\n", name);
}
