#include <stdio.h>

int main(void) {
	int n, k;

	while (scanf("%d %d", &n, &k) != EOF) {
		int ans = n;
		while (n > 0) {
			n += -k + 1;
			ans++;
		}
		printf("%d\n", --ans);
	}

	return 0;
}