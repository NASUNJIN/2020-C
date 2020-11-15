#include <stdio.h>

int main(void) {
	int i, n = 3;
	char cArray[3];

	printf("Input three characters:");

	scanf("%c%c%c", &cArray[0], &cArray[1], &cArray[2]);

	for (i = 0; i < n; i++)
		printf("%c", cArray[i]);

	return 0;
}