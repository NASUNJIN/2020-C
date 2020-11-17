#include <stdio.h>

int main(void) {
	char* pc[3] = { "Hello",", ","World!" };

	printf(pc[0]);
	printf(pc[1]);
	printf(pc[2]);
	printf("\n");

	char** pp;
	pp = &pc[0];

	printf(*pp);
	printf(*(pp + 1));
	printf(*(pp + 2));
	printf("\n");

	printf("%c",**pp);
	return 0;
}