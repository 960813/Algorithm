#include <stdio.h>

int main(void) {
	int n, ans, i;

	scanf("%d", &n);
	ans = n;

	for (i = 1; i < n; i++) {
		int t = i, r = i;
		while (t > 0) {
			r += t % 10;
			t /= 10;
		}
		if (r == n && i < ans)
			ans = i;
	}
	printf("%d", ans == n ? 0 : ans);

	return 0;
}