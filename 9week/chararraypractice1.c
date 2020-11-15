#include <stdio.h>

int main(void) {
	char cArr[] = { 'H', 'e', 'l', 'l', 'o', ',', ' ','W', 'o', 'r', 'l', 'd', '!', '\0' };
	int i = 0;

	printf("%s\n", cArr);
	printf("\n");

	while (cArr[i] != '\0')
		printf("%c", cArr[i++]);
	printf("\n");

	cArr[6] = '\0';
	printf("%s\n", cArr);
	printf("\n");

	printf("%s", &cArr[7]);
	return 0;
}