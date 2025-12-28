#include <stdio.h>

int get_strlen(char *s) {
	char *p = s;

	while (*p != '\0') {
		p++;
	}

	return p - s;
}

int main(void) {
	int a[6] = {11, 22, 33, 44, 55, 999};
	int *p = &a[0];

	for (int i = 0; i < 5; i++) {
		printf("%d\n", *(p + i));  // Same as p[i]!
	}

	while (*p != 999) {
		printf("%d\n", *p);
		p++;
	}

	printf("%d\n", get_strlen("Hello, World!"));
}
