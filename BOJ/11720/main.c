#include <stdio.h>

char ch[100];
int main(void) {
	int n, i, sum = 0;
	
	scanf("%d", &n);
	scanf("%s", ch);

	for (i = 0; i < n; i++)
		sum += (int)ch[i] - 48;

	printf("%d", sum);

	return 0;
}