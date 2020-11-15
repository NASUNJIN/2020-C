#include <stdio.h>

int main(void) {
	char str[] = "Hello, World!";
	int i;

	printf("%s\n", str);

	for (i = 0; i < sizeof(str) - 1; i++)
		printf("%c", str[i]);
	printf("\n");

	i = 0;
	while (str[i] != '\0')
		printf("%c", str[i++]);
	printf("\n");

	return 0;
}