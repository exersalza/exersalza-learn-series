#include <stdio.h>

int main() {
	char greetings[] = "Hello, World!";
	printf("%s\n", greetings);

	// the other non so cool method
	char greetins2[] = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
	printf("%s\n", greetins2);

	// its the same thing basically, but its much complexer to read and write
}
