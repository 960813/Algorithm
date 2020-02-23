#include <stdio.h>

int main(void) {
	short h = 0, m = 0;
	scanf("%hd %hd", &h, &m);

	if (m < 45) {
		m = 60 - (45-m);
		h--;
	}
	else {
		m -= 45;
	}

	if (h == -1)
		h = 23;

	printf("%hd %hd", h, m);
	return 0;
}