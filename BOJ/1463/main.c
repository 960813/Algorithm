#include <stdio.h>

int min(int x, int y) {
	return x < y ? x : y;
}

int arr[1000001] = { 0 };
int main(void) {
	int i, n;
	scanf("%d", &n);

	arr[1] = 0;
	for (i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
	}
	printf("%d", arr[n]);

	return 0;
}