#include <stdio.h>

int main(void) {
	int i, n, cnt = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		int tmp = i;
		while (tmp > 0) {
			tmp /= 10;
			cnt++;
		}
	}
	printf("%d", cnt);


	return 0;
}