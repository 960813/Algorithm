#include <stdio.h>
#include <math.h>

int isPrime(int n) {
	if (n <= 1) return 0;
	int i;
	for (i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return 0;
	return 1;
}

int main(void) {
	int n, input, cnt = 0, i;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &input);
		if (isPrime(input))
			cnt++;
	}
	printf("%d", cnt);

	return 0;
}