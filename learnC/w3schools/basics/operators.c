#include <stdio.h>

void main() {
	// all Operators that exists in C
	// Aritmetic Operators
	// + Addition - 2 + 2 = 4
	// - Subtraction - 2 - 2 = 0
	// * Multiplication - 2 * 2 = 4
	// / Division - 2 / 2 = 1
	// % Modulo - 2 % 2 = 0
	// ++ Increment - myNum++ = 2
	// -- Decrement - myNum-- = 1
	//
	// Assignment Operators
	// = Assignment - myNum = value1 + value2
	// += Addition and Assignment - myNum += 2
	// -= Subtraction and Assignment - myNum -= 2
	// *= Multiplication and Assignment - myNum *= 2
	// /= Division and Assignment - myNum /= 2
	// %= Modulo and Assignment - myNum %= 2
	// &= Bitwise AND and Assignment - myNum &= 2 => C = C & 2
	// |= Bitwise OR and Assignment - myNum |= 2 => C = C | 2
	// ^= Bitwise XOR and Assignment - myNum ^= 2 => C = C ^ 2
	// <<= Left Shift and Assignment - myNum <<= 2 => C = C << 2
	// >>= Right Shift and Assignment - myNum >>= 2 => C = C >> 2
	//
	// Relational Operators
	// == Equal - 2 == 2 = 1
	// != Not Equal - 2 != 2 = 0
	// > Greater Than - 2 > 2 = 0
	// < Less Than - 2 < 2 = 1
	// >= Greater Than or Equal - 2 >= 2 = 1
	// <= Less Than or Equal - 2 <= 2 = 0
	//
	// Logical Operators
	// && AND - 2 && 2 = 0
	// || OR - 2 || 2 = 1
	// ! NOT - !2 = 0
	//
	// Bitwise Operators
	// & AND - 2 & 2 = 0
	// | OR - 2 | 2 = 3
	// ^ XOR - 2 ^ 2 = 1
	// ~ NOT - ~2 = -3
	// << Binary Left Shift - 2 << 2 = 8
	// >> Binary Right Shift - 2 >> 2 = 0
	//
	// Example for bitwise operations
	// A = 0011 1100
	// B = 0000 1101
	//
	// A & B = 0000 1100
	// A | B = 0011 1101
	// A ^ B = 0011 0001
	// ~A = 1100 0001
	//
	// Misc Operators
	// ?: Ternary Operator - 2 > 1 ? "Yes" : "No" = "Yes"
	// sizeof(type) - sizeof(a) = 4
	// & - Address of - &a = 0x7fff5fbff7c0
	// * - Pointer to - *a = 0x7fff5fbff7c0
	//
	int myInt;
	float myFloat;
	double myDouble;
	char myChar;

	// Note that we use here the %lu to print the value of the variable, it's because
	// the sizeof() function returns the value as an unsigned long int.
	printf("%lu\n", sizeof(myInt));
	printf("%lu\n", sizeof(myFloat));
	printf("%lu\n", sizeof(myDouble));
	printf("%lu\n", sizeof(myChar));
}
