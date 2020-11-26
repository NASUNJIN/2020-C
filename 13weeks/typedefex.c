#include <stdio.h>

typedef int INT;
typedef int* PTRINT;

typedef unsigned int UINT;
typedef unsigned int* PTRUNIT;

typedef unsigned char UCHAR;
typedef unsigned char* PTRUCHAR;

int main(void) {
	INT i = 10;
	PTRINT pi = &i;

	UINT ui = 20;
	PTRUNIT pui = &ui;

	UCHAR uc = 'a';
	PTRUCHAR puc = &uc;

	printf("%d, %d, %c", *pi, *pui, *puc);

	return 0;
}