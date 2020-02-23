#include <stdio.h>

int main(void) {
	short a = 0, b = 0, c = 0;
	scanf("%hd %hd %hd", &a, &b, &c);

	if (a > b) {
		if (a > c)
			printf("%hd", b > c ? b : c);
		else
			printf("%hd", a > b ? a : b);
	}
	else {
		if (b > c)
			printf("%hd", a > c ? a : c);
		else
			printf("%hd", a > b ? a : b);
	}
	return 0;
}