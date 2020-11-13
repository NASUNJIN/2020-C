#include <stdio.h>

int main(void) {
	int i = 1, j =1, k = 1;

	while (i <= 5) 
	{
		while (j < k) 
		{
			printf(" ",j++);
		}
		
		if (i % 2 == 0)
			printf("O");
		else
			printf("X");

		while (j <= 5)
		{
			printf(" ",j++);
		}

		printf("\n",i++,k++,j=1);
	}
	
	return 0; 
}