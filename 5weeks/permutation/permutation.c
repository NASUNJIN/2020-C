#include <stdio.h>

int factorial(int);

int main(void) {
	int n = 3, r = 2, nPr;

	nPr = factorial(n) / factorial(n - r);

	printf("nPr is %d.", nPr);
	
	return 0;
}

int factorial(int num) {
	int i;
	int result = 1;

	for (i = 1; i <= num; i++)

		result *= i;

	return result;
}