#include <stdio.h>
#include <string.h>

int score[1000];
int main() {
	int c, i, j;
	scanf("%d", &c);
	for (i = 0; i < c; i++) {
		int n;
		int sum = 0;
		double avg = 0.0;

		scanf("%d", &n);

		for (j = 0; j < n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}
		avg = (double)sum / n;

		int over = 0;
		for (j = 0; j < n; j++)
			if (score[j] > avg)
				over++;

		printf("%.3lf%%\n", (double)over / n * 100);
		memset(score, 0, sizeof(score));
	}
	return 0;
}