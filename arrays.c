#include <stdio.h>

void times2(int *a, int len) {
    for (int i = 0; i < len; i++)
        printf("%d\n", a[i] * 2);
}

void print_2D_array(int a[2][5]) {
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main (void) {
	int i;
	float f[4];

	f[0] = 1.1;
	f[1] = 2.1;
	f[2] = 3.1;
	f[3] = 4.1;

	int a[5] = {22, 37, 3490, 18, 95};
	times2(a, 5);

	int b[10] = {0, 11, 22, [5]=55, 66, 77};

	int c[] = {22, 37, 3490};

	int d[2][5] = {
		{0, 1, 2, 3, 4},
		{5, 6, 7, 8, 9}
	};

	print_2D_array(d);

	int *e;
	e = &d[0][0];

	for (i = 0; i < 4; i++) {
		printf("%f\n", f[i]);
	}
}
