#include <stdio.h>

int main(void) {
 printf("bool: %zu\n", sizeof(bool));
 printf("char: %zu\n", sizeof(char));
 printf("signed char: %zu\n", sizeof(signed char));
 printf("unsigned char: %zu\n", sizeof(unsigned char));
 printf("short: %zu\n", sizeof(signed short));
 printf("unsigned short: %zu\n", sizeof(unsigned short));
 printf("int: %zu\n", sizeof(signed int));
 printf("unsigned int: %zu\n", sizeof(unsigned int));
 printf("long: %zu\n", sizeof(long));
 printf("unsigned long: %zu\n", sizeof(unsigned long));
 printf("long long: %zu\n", sizeof(long long));
 printf("unsigned long long: %zu\n", sizeof(unsigned long long));
 printf("float: %zu\n", sizeof(float));
 printf("double: %zu\n", sizeof(double));
 printf("long double: %zu\n", sizeof(long double));
 printf("pointer: %zu\n", sizeof(int*));
}
