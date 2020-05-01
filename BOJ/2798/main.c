#include <stdio.h>

int arr[101];
int main(void) {
	int N, M, i, j, k, ans = 0;

	scanf("%d %d", &N, &M);

	for (i = 1; i <= N; i++)
		scanf("%d", &arr[i]);

	int ret = M;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N; j++) {
			for (k = 1; k <= N; k++) {
				if (i == j || i == k || j == k) continue;
				int tmp = M - arr[i] - arr[j] - arr[k];
				if (tmp >= 0 && tmp < ret) {
					ret = tmp;
					ans = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}
	printf("%d", ans);

	return 0;
}