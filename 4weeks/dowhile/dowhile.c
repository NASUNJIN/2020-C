#include <stdio.h>

int main(void)
{
	int i = 0;

	do {
		printf("i is %d.\n", i++);
	} while (i < 2);

	do {
		printf("i is %d.\n", --i);
	} while (i > 0);

	return 0;
}