#include <stdio.h>
#include <string.h>

int score[51];
int weight[51];
int height[51];
int main(void) {
	int N, i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) {
		scanf("%d %d", &weight[i], &height[i]);
		score[i] = 1;
	}
	

	for (i = 1; i <= N; i++) {
		int tWeight = weight[i];
		int tHeight = height[i];
		for (j = 1; j <= N; j++) {
			if (i == j) continue;
			if (weight[j] > tWeight && height[j] > tHeight)
				score[i]++;
		}
		printf("%d ", score[i]);
	}

	return 0;
}