#include <stdio.h>

int main(void) {
	char str[100] = "Yesterday \"All\" My \'Troubles\' Seemed So Far Away.";
	int nArr[3] = { 0,0,0 }, i = 0;
	
	for (i = 0; str[i] != '\0'; i++) {
		int k = str[i];

		if (64 < k && k < 91)
			nArr[0]++;
		else if (96 < k && k < 123)
			nArr[1]++;
		else
			nArr[2]++;
	}

	for (i = 0; i < 3; i++)
		printf("%d, ", nArr[i]);

	return 0;
}