#include <stdio.h>

int main(void) {
	char* pc[3] = { "Hello", ", ""World!" };
	char* p;

	printf(pc[0]);
	printf(pc[1]);
	printf(pc[2]);
	printf("\n");

	p = pc[1];
	pc[1] = pc[2];
	pc[2] = p;

	printf(pc[0]);
	printf(pc[1]);
	printf(pc[2]);
	
	return 0;
}