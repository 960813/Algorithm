#include <stdio.h>

void sort(int* arr, int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int least = i;
		for (j = i + 1; j < n; j++) {
			if (arr[j] < arr[least])
				least = j;
		}
		int tmp = arr[i];
		arr[i] = arr[least];
		arr[least] = tmp;
	}
}

int arr[1000];
int main(void) {
	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(arr, n);

	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}