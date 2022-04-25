#include<stdio.h>
#include<string.h>


// here you can see a simple way for a buffer overflow
// when you run this, you will get a segmengation violation, or your program or system crashes
//
// the reason is that the program is trying to write to a buffer that is too small
// inside the function that is called from the main function, it will try to copy a string(256 bytes) inside the buffer(16 bytes)
// the end is that the string is overwrite the buffers SFP and RET with 'A' what will return 0x41414141 what is outside of the process space

void function(char *str)
{
	char buffer[16];

	strcpy(buffer, str);
}

void main()
{
	char large_string[256];
	int i;

	for (i = 0; i < 256; i++)
		large_string[i] = 'A';

	function(large_string);
}
