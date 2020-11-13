#include <stdio.h>

int main(void) {
	int i;

	for (i = 1; i < 5; i++) {
		if (i % 2 == 0)
			continue;

			printf("%d\n", i);
	}

	int j = 3;

	while (j > 0) {
		if (j == 2) {
			j--;
			continue;
		}

		printf("%d\n", j);
		j--;
	}

	int k = 1;
	
	do {
		if (k > 2) {
			k++;
			continue;
		}

		printf("%d\n", k);
		k++;
	} while (k < 4);

	return 0;
}