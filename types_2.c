#include <stdio.h>
#include <float.h>

int main(void) {
	int a;
	signed int b;
	signed c;
	unsigned int d;
	unsigned e;

	char ch = 'B';
	printf("%c\n", ch); // B
	printf("%d\n", ch); // 66
	
	char f;
	signed char g;
	unsigned char h;

	long long int i;
	long long j;
	short  k;
	long l;

	// Floats
	// Stored in scientific notation
	// "significand" + exponent
	// Ex: 12345 x 10^-3, 12345 and -3 are the pieces stored
	// Likely uses 2 instead of 10, but computer dependent
	
	// Sizeof needs to take into account size AND significant digits
	float m;
	double n;
	long double o;

	// These are the minimum significant digits that will be printed SAFELY
	printf("Float Digits: %d\n", FLT_DIG);
	printf("Double Digits: %d\n", DBL_DIG);
	printf("Long Double Digits: %d\n", LDBL_DIG);

	// Safe significant digits in actual use
	printf("Float Decimal Digits: %d\n", FLT_DECIMAL_DIG);
	printf("Double Decimal Digits: %d\n", DBL_DECIMAL_DIG);
	printf("Long Double Decimal Digits: %d\n", LDBL_DECIMAL_DIG);
	printf("Largest Decimal Digits: %d\n", LDBL_DECIMAL_DIG);

	int p = 0x1A2B; // Hexadecimal
	int q = 0x1a2b;

	printf("%x\n", p);

	int r = 012; // octal
	printf("%o\n", r);

	int s = 0b10101010; // Unofficially binary, but compiles
	// no way to print binary, you'd have to print 1 it at a time using bitwise
	// printf will print the int version

	// Force constant to be a certain type with a suffix. But lesser used
	long int t = 1234LL;

	// unsuffixed floats default to double
	float u = 3.14; // double
	float v = 3.14f; // float

	// Floats are scientific notication - literal
	double w = 123.456e+3;

	// Hexadecimal Floats
	double x = 0xa.1p3;
}
