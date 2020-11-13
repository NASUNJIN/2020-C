#include <stdio.h>

void getmax(void);
void getmin(void);
float a, b, c, max, min;

int main(void)
{
	a = 3.5, b = -4.5, c = 2.3e-1, max = min = 0;
	getmax(); getmin();
	printf("Max number is %f.\n", max);
	printf("Min number is %f.\n", min);

	return 0;
}

void getmax(void) {
	if (a > b)
		max = a;
	else
		max = b;
	if (c > max)
		max = c;

	return max;
}

void getmin(void) {
	if (a < b)
		min = a;
	else
		min = b;
	if (c < min)
		min = c;

	return min;
}