#include <stdio.h>
#include <math.h>

double mean(int*, int*);
double std(int*, int*);

int main(void) {
	int q = 10, r = 5;

	printf("Mean is %.2f and std is %.2f.\n", mean(&q, &r), std(&q, &r));

	return 0;
}

double mean(int* x, int* y) {
	return (*x + *y) / 2;
}

double std(int* x, int* y) {
	double m = mean(x, y);
	return sqrt(((*x - m) * (*x - m) + (*y - m) * (*y - m)) / 2);
}