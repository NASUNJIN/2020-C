#include <stdio.h>

int main(void) {
	int i, j, k = 0;

	i = 1;
	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			k = i * j;
			printf("%d ", k);
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}