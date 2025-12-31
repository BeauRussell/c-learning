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
}
