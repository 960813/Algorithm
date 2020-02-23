#include <stdio.h>

int main(void) {
	int n1 = 0, n2 = 0;
	scanf("%d %d", &n1, &n2);
	printf("%.9lf", n1 / (double)n2);
	return 0;
}