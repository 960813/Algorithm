#include <stdio.h>

int main(void) {
	int n = 0, i = 0, input = 0, min = 1000001, max = -1000001;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%d", &input);
		if (input < min)
			min = input;
		if (input > max)
			max = input;
	}
	printf("%d %d", min, max);

	return 0;
}