#include <stdio.h>

int main(void) {
	int i, j, k = 0;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			printf("%d ", k);
		}
		printf("\n");
	} 
	printf("\n");

	return 0;
}