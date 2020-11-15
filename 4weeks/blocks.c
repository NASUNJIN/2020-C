#include <stdio.h>

int main(void)
{
	int x = 1, y = 2;

	int temp1 = x + y;
	printf("OUtside: \n");
	printf("x = y is %d.\n", temp1);

	{
		int temp2 = x * y;
		printf("Inside:\n");
		printf("x * y is %d.\n", temp2);
	}

	return 0;
}