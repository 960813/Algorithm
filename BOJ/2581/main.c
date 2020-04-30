#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if (n == 1) return 0;
	if (n == 2) return 1;
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;

	return 1;
}

int main(void) {
	int i, m, n, sum = 0, least = 10001;

	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
			least = i < least ? i : least;
		}
	}
	if (sum == 0)
		printf("-1\n");
	else
		printf("%d\n%d\n", sum, least);

	return 0;
}