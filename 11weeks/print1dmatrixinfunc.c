#include <stdio.h>
#define M 3

void printM1Da(int[]);
void printM1Dp(int*);

int main(void) {
	int A[M] = { 1,2,3 };

	printM1Dp(A);
	printf("\n");
	
	printM1Da(A);
	printf("\n");

	return 0;
}

void printM1Da(int a[]) {
	int i;

	for (i = 0; i < M; i++)
		printf("%d ", a[i]);
}

void printM1Dp(int* a) {
	int i;

	for (i = 0; i < M; i++)
		printf("%d ", *(a + i));
}