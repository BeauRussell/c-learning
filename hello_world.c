#include <stdio.h>

int main(void) {
    int i = 2;
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type
								//
	int test = 1;

	if (test) {
		printf("test is true!\n");
	}

	int y = 0;
	int x = 13;

	y += x > 10 ? 17 : 37;
	printf("y is %d\n", y);
	printf("y is size %zu\n", sizeof y);
	printf("%zu\n", sizeof(char));

    printf("%s  i = %d and f = %f!\n", s, i, f);
}
