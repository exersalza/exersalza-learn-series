#include <stdio.h> // standart lib for in-n-output

int main() {
	// Var syntax:
	// <type> varName = value;

	int myNum = 5;
	// or, you can assign values later at runtime, only if it a var, if it a Const than not.

	int myNum2;
	myNum2 = 5;

	int myNum3;

	printf("ff%nff\n");

	// when you do only printf(myNum); then will nothing happens
	//
	// Types to print:
	// %d - int
	// %f - float
	// %c - char
	// %s - string
	// %x - hexadecimal
	// %b - binary
	// %o - octal
	// %e - scientific notation
	// %g - float
	// %lf - double
	// %Lf - long double
	// %p - pointer
	// %u - unsigned int
	// %lu - unsigned long int
	// %% - %
	// %n - new line


	// Multi Declarations:
	// <type> varName1, varName2, varName3;
	// or
	// <type> varName1 = value, <type> varName2, <type> varName3;

	int x, y, z;
	x = y = z = 5;

	printf("%d\n", x + y + z);



	// Naming - Good
	int minutesPerHour = 60;

	// Naming - Bad
	int m = 10;

	// Var names can have only letters, numbers, _ and can only start with a letter or `_`
	// Var names can't have spaces
	// Var names can't have special characters
	// Var names can't be a reserved keyword
	// Var names can't be a C++ keyword
	// Var names are case sensitive
}
