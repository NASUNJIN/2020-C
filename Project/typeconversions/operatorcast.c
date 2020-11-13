#include <stdio.h>
#include <math.h>

int main(void)
{
	int i = 2;
	float f;

	f = i + 3.141592;
	printf("%f\n", f);

	f = (float)i + 3.141592;
	printf("%f\n", f);

	f = sqrt((double)i);
	printf("%f\n", f);

	return 0;
}