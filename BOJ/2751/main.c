#include <stdio.h>
#define SIZE 1000000
#define qSWAP(x, y) { int t = x; x = y; y = t; }

int arr[SIZE];

void qSort(int* array, int left, int right) {
	int mLeft = left, mRight = right;
	int pivot = array[(left + right) / 2];

	while (mLeft <= mRight) {
		while (pivot > array[mLeft]) mLeft++;
		while (pivot < array[mRight]) mRight--;

		if (mLeft <= mRight) {
			qSWAP(array[mLeft], array[mRight]);
			mLeft++, mRight--;
		}
	}

	if (left < mRight) qSort(arr, left, mRight);
	if (mLeft < right) qSort(arr, mLeft, right);
}

int main(void) {
	int n, i;

	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	qSort(arr, 0, n - 1);


	for (i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
}