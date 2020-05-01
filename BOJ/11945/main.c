#include <stdio.h>

char arr[10][10];
int main(void) {
	int N, M, i, j;

	scanf("%d %d", &N, &M);

	for (i = 0; i < N; i++) {
		scanf("%s", &arr[i]);

		for (j = 0; j < M; j++)
			printf("%c", arr[i][M - 1 - j]);

		printf("\n");
	}

	return 0;
}