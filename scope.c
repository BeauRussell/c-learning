#include <stdio.h>

int shared = 10;

int main(void) {
	int i = 10;

	{
		int i = 20;

		printf("%d\n", i);
	}

	printf("%d\n", i);
}
