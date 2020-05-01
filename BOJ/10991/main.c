#include <stdio.h>

int main(void) {
	int n, i, j, flag;
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++)
			printf(" ");
		flag = 1;
		for (j = 0; j <= i * 2; j++)
			printf("%c", (flag *= -1) == -1 ? '*' : ' ');
		printf("\n");
	}
	return 0;
}