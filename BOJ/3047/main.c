#include <stdio.h>
#define swap(x, y) {int t=x; x=y, y=t;}

void sort(int* arr) {
	if (arr[0] > arr[1]) swap(arr[0], arr[1]);
	if (arr[0] > arr[2]) swap(arr[0], arr[2]);
	if (arr[1] > arr[2]) swap(arr[1], arr[2]);
}

int arr[3];
int ans[3];
int main(void) {
	int i;

	for (i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	sort(arr);

	while (i--) {
		char ch;
		scanf(" %c", &ch);
		printf("%d ", arr[ch - 'A']);
	}

	return 0;
}