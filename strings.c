#include <stdio.h>
#include <string.h>

int main (void) {
	// immutable. Use with const
	const char *s = "Hello, world!";
	// mutable
	char st[] = "Hello, world!";

	printf("%s\n", s);
	printf("The string is %zu bytes long.\n", strlen(s));
}
