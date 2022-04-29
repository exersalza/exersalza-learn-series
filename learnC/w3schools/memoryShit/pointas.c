#include <stdio.h>

int main() {
	int myAge = 43;

	printf("%d\n", myAge);
	printf("%p\n", &myAge); // here we print the memory location of this variable


	int* ptr = &myAge; // here we create a pointer to the memory location of myAge
	printf("%d\n", myAge);
	printf("%p\n", &myAge);
	printf("%p\n", ptr); // here we print the location that the ptr is holding
	printf("%p\n", *ptr); // here we print the memory location of the value that the pointer points t
}
