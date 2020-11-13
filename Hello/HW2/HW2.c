#include <stdio.h>

int main()
{
	char a = '3';
	char b = 'A';

	printf("'3' is represented as %x\n", a);
	printf("'A' is represented as %x\n", b);

	char c = 12;
	char d = -12;
	char e = -128;

	printf("12 is represented as %02x\n", c);
	printf("-12 is represented as %x\n", (d & 0xFF));
	printf("-128 is represented as %x\n", (e & 0xFF));

	float f = -5.25;
	float g = 0.1;

	unsigned int h = *((unsigned int*)&f);
	unsigned int i = *((unsigned int*)&g);
	printf("-5.25 is represented as %0x\n", h);
	printf("0.1 is represented as %0x\n", i);

	return 0;

}