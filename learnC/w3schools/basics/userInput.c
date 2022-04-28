#include <stdio.h>

int main() {
	int myNum;

	printf("Enter a number: ");
	scanf("%d", &myNum); // note here: the use the & to get the memory address of the variable

	printf("The number you entered is %d\n", myNum);

	char firstName[30];
	printf("Enter your first name: ");
	scanf("%s", firstName);
	printf("Your first name is %s\n", firstName);

	return 0;
}
