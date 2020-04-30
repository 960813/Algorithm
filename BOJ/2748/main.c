#include <stdio.h>

long long arr[91];
int main(void) {
	int n, i;

	scanf("%d", &n);

	arr[1] = 1;
	for (i = 2; i <= 90; i++)
		arr[i] = arr[i - 1] + arr[i - 2];

	printf("%lld", arr[n]);

	return 0;
}