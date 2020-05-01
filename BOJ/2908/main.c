#include <stdio.h>

int reverse(int n) {
	int start = (n % 10) * 100;
	int mid = (n % 100) / 10 * 10;
	int end = n / 100;


	return start + mid + end;
}

int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);

	a = reverse(a);
	b = reverse(b);

	printf("%d", a > b ? a : b);

	return 0;
}