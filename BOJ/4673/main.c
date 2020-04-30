#include <stdio.h>
#define SIZE 10001

int arr[SIZE];
int d(int n) {
	int sum = n;

	while (1) {
		if (n == 0) break;
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void) {
	int i;

	for (i = 1; i < SIZE; i++) {
		int idx = d(i);
		if (idx <= SIZE)
			arr[idx] = 1;
	}

	for (i = 1; i < SIZE; i++)
		if (arr[i] != 1)
			printf("%d\n", i);

	return 0;
}