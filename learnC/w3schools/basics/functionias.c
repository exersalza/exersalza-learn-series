#include <stdio.h>

int main() {
	printHello();
	myFunction("Liam");
	myFunctionv3("Liam", 14);
	printf("The result is: %d", addFiveToX(10));
	return 0;
}

void printHello() {
	printf("Hello, World!\n");
}

// Functions with parameters
void myFunction(char name[]) {
	printf("Hello, %s!\n", name);
}

void myFunctionv3(char name[], int age) {
	printf("Hello, %s! You are %d years old.\n", name, age);
}

// functions but now with return values
int addFiveToX(int x) {
	return 5 + x;
}
