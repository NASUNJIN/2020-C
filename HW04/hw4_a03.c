#include <stdio.h>

void printo(void);
void printx(void);
void printn(void);

int main(void) {
	int row, column, x, y, i, j;
	while (1) {
		printf("Input row, column, x, y:");
		scanf("%d %d %d %d", &row, &column, &x, &y);

		for (i = 1; i <= row; i++) {
			for (j = 1; j <= column; j++)
				if (i == x)
					printx();
				else if (j == y)
					printx();
				else
					printo();
			printn();
		}
	}
	return 0;
}
void printo(void) {
	printf("O");
	return 0;
}
void printx(void) {
	printf("X");
	return 0;
}
void printn(void) {
	printf("\n");
}