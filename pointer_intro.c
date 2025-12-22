#include <stdio.h>

int main(void) {
	int i = 10;
	int *p;

	p = &i;

	*p = 20;

	printf("The value of i is %d\n", i);
	printf("And its address is %p\n", p);
}
