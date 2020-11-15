#include <stdio.h>

int decide(int);

int main(void) {
	
	int color = 24;
	int res = decide(color);

	if (res == 1)
		printf("White!\n");
	else
		printf("Black!\n");

	return 0;
}

int decide(int v) {
	if (50 < v && v <= 100)
		return 0;
	else
		return 1;
}