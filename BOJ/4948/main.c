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
	int n, input, cnt, i;

	while (1) {
		scanf("%d", &n);
		if (!n) break;

		cnt = 0;
		for (i = n + 1; i <= 2 * n; i++) 
			if (isPrime(i))
				cnt++;
		
		printf("%d\n", cnt);
	}


	return 0;
}