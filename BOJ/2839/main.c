#include <stdio.h>

int main(void) {
	int N, kg5 = 0, ret = 1667;
	scanf("%d", &N);
	// N = 5x + 3y
	for (kg5 = 0; kg5 <= N / 5; kg5++) {
		int remainKg = N - kg5 * 5;
		if (remainKg % 3 == 0) {
			int kg3 = remainKg / 3;

			if ((kg3 + kg5) < ret)
				ret = kg3 + kg5;
		}
	}
	if (ret == 1667) ret = -1;
	printf("%d", ret);

	return 0;
}