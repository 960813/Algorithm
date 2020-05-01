#include <stdio.h>

int main(void) {
	int n, i, j;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++)
			printf(" ");
		for (j = 0; j <= i * 2; j++)
			printf("*");
		printf("\n");
	}
	for (i = n; i > 0; i--) {
		for (j = i; j <= n; j++)
			printf(" ");
		for (j = 0; j <= (i - 2) * 2; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}