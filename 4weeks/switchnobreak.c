#include <stdio.h>

int main(void)
{
	int x = 2;

	switch (x)
	{
	case 0:
	case 1:
	case 2:
		printf("x is less than 3.\n");
		break;

	case 3:
	case 4:
	case 5:
		printf("x is less than 6.\n");
		break;

	default:
		printf("x is 6 or more.\n");
	}
	return 0;
}