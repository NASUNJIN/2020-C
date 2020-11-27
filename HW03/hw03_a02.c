#include <stdio.h>

void printm(int, int);

int main(void) 
{
	int row = 5, column = 5;

	printm(row, column);

	return 0;
}

void printm(int r, int c)
{
	int i, row = 1, column =1;

	for (i = 1; i <= r * c; i++)
	{
		if ((row+column) % 2 == 0)
		{
			printf("X");
		}
		else
		{
			printf("O");
		}
		if (column % c == 0)
		{
			printf("\n");
		}
		
		if (column == c)
		{
			row++;
			column = 0;
		}
		column++;
	}
}