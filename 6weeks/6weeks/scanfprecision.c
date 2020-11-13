#include <stdio.h>

int main(void) {
	int i; float f;
	while (1) {
		printf("Input integer i and float f:");
		scanf("%d %f", &i, &f);
		printf("i is %06d\n", i);
		printf("f is %.3f\n", f);
	}
	return 0;
}