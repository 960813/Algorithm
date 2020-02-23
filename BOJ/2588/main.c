#include <stdio.h>

int main(void) {
	int n1 = 0, n2 = 0;
	scanf("%d %d", &n1, &n2);

	printf("%d\n", n1 * (n2 % 10));
	printf("%d\n", n1 * ((n2 /10)%10));
	printf("%d\n", n1 * (n2 / 100));
	printf("%d", n1 * n2);

	return 0;
}