#include <stdio.h>

int main(void) {
	int n = 0, i = 0;
	short a = 0, b = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%hd %hd", &a, &b);
		printf("Case #%d: %hd + %hd = %d\n", i, a, b, a + b);
	}

	return 0;
}