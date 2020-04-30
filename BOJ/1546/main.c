#include <stdio.h>

double score[1001];
double max;
double sum;
int main() {
	int n, i;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%lf", &score[i]);
		if (score[i] > max) max = score[i];
	}

	for (i = 1; i <= n; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}
	printf("%lf", (double)sum / n);

	return 0;
}