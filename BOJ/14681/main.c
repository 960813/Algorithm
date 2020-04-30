#include <stdio.h>

int answer(int x, int y) {
	if (x > 0)
		return y > 0 ? 1 : 4;
	else
		return y > 0 ? 2 : 3;
}

int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);

	printf("%d", answer(x, y));

	return 0;
}