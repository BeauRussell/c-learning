#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int *p;
	if ((p = malloc(sizeof(int))) == NULL) {
		printf("Error allocating to p\n");
		return(1);
	}

	*p = 12;

	printf("%d\n", *p);

	free(p);

	int *a = malloc(sizeof(int) * 10);
	memset(a, 0, 10 * sizeof(int));
	int *b = calloc(10, sizeof(int));
	int *c = realloc(b, 20 * sizeof(*c));
	if (c == NULL) {
		return 1;
	} else {
		b = c;
	}

	for (int i = 0; i < 10; i++) {
		a[1] = i * 5;
	}

	free(a);
	free(b);
}
