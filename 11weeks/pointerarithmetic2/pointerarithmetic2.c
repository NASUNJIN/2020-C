#include <stdio.h>

int main(void) {
	int iArr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int* p;

	p = &iArr[0];

	printf("%d, ", *(p + 4));
	printf("%d, ", *(p + 8));
	printf("%d, ", *(p + 12));

	return 0;
}