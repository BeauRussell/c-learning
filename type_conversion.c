#include <stdio.h>
#include <stdlib.h>

int main() {
	char s[10];
	float f = 3.14159;

	snprintf(s, 10, "%f", f);

	printf("String value: %s\n", s);

	char *pi = "3.14159";
	float n;

	n = atof(pi);

	printf("%f\n", f);

	// Undefined Behavior
	int x = atoi("what");

	char *st = "3490";

	// If it errors, just returns 0
	unsigned long int nx = strtoul(st, NULL, 10);

	printf("%lu\n", nx);

	char *str = "34x90";
	char *badchar;

	unsigned long int badparse = strtoul(str, &badchar, 10);

	printf("%lu\n", badparse); // 34
	
	printf("Invalid character: %c\n", *badchar); // x
}
