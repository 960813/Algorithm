#include <stdio.h>

int arr[41];
int f(int n) {
	if (n <= 1) return arr[n] = n;

	if (arr[n]) return arr[n];

	return arr[n] = f(n - 1) + f(n - 2);
}
int main(void) {
	int tc, n;
	scanf("%d", &tc);
	while (tc--) {
		scanf("%d", &n);
		if (n == 0)
			printf("%d %d\n", 1, 0);
		else if (n == 1)
			printf("%d %d\n", 0, 1);
		else {
			f(n);
			printf("%d %d\n", arr[n - 1], arr[n]);
		}
	}
	return 0;
}