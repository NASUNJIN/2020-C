/*#include <stdio.h>

int main(void) {
	char str[100];
	printf("Input \"Hello\":");

	scanf("%s", str);
	printf("%s\n", str);

	return 0;
}*/

/*#include <stdio.h>

int main(void) {
	char cArr[100];
	printf("Input \"Hello\":");

	scanf("%s", cArr);
	printf("%s\n", cArr);

	return 0;
}*/

#include <stdio.h>

int main(void) {
	char cArray[100];
	printf("Input \"Hello, World!\":");

	gets(cArray);
	printf("%s", cArray);
	
	return 0;
}
