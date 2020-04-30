#include <stdio.h>

int main(void) {
	int N;

	scanf("%d", &N);
	for (int i = 1; i <= (2 * N - 1); i++) {
		if (i <= N) {
			for (int j = 1; j <= i; j++) {
				printf("*");
			}
		}
		else {
			for (int k = 1; k <= 2 * N - i; k++) {
				printf("*");
			}
		}
		printf("\n");
	}

	return 0;
}