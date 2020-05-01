#include <stdio.h>

int f(int n) {
	int i, ret = 1;

	if (n == 0) return 1;

	for (i = 1; i <= n; i++)
		ret *= i;

	return ret;
}

int main(void) {
	int N;
	scanf("%d", &N);

	printf("%d\n", f(N));

	return 0;
}