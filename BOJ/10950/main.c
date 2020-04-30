#include <stdio.h>

int main(void) {
	short t = 0, a = 0, b = 0, i = 0;
	scanf("%hd", &t);
	for (i = 0; i < t; i++) {
		scanf("%hd %hd", &a, &b);
		printf("%hd\n", a + b);
	}

	return 0;
}