#include <stdio.h>

int add(int a, int b);

int main(void) {

	int sum = add(1, 2);

	printf("%d", sum);

	return 0;
}

int add(int c, int d) {

	int sum;
	sum = c + d;

	return sum;
}
