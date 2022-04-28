#include <stdio.h>

void main() {
	const int myNum = 15;
	myNum = 10;

	// this will throw an error: assignment of read-only variable 'myNum'
	//
	// Note: when you want to assign a const, it must have always a values,
	// otherwise it will not work
	// you can also declare constant as good practice in UPPERCASE (const int MY_NUM = 15;)
	// to recognize it as constant
}
