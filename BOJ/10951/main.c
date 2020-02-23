#include <stdio.h>

int main(void) {
	short a = 0, b = 0;
	while (scanf("%hd %hd", &a, &b) != EOF)
		printf("%hd\n", a + b);
	return 0;
}