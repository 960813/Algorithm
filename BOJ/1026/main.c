#include <stdio.h>


int s(int a[], int b[], int n) {
	int i, ret = 0;
	for (i = 0; i < n; i++) {
		ret += a[i] * b[i];
	}
	return ret;
}

int sort(int arr[], int n, int flag) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		int least = i;
		for (j = i + 1; j < n; j++) {
			if (flag == 0) {
				if (arr[j] < arr[least])
					least = j;

			}
			else {
				if (arr[j] > arr[least])
					least = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[least];
		arr[least] = temp;
	}
}

int arr_a[50];
int arr_b[50];
int main(void) {
	int n, i, j;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr_a[i]);

	for (i = 0; i < n; i++)
		scanf("%d", &arr_b[i]);

	sort(arr_a, n, 0);
	sort(arr_b, n, 1);

	printf("%d", s(arr_a, arr_b, n));

	return 0;
}