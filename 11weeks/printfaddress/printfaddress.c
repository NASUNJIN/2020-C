#include <stdio.h>
int main(void) {
	char str[100] = "Hello, World!";
	printf("%p\n", str);
	/*printf((char *)0x008FF934); printf("\n");*/
	printf("%s\n", str);
	printf(str);
}