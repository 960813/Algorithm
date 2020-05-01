#include <stdio.h>

int arr[10001];
int main(void) {
	int n, i, j, max = 0, temp;

	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		scanf("%d", &temp);
		arr[temp]++;
		if (temp > max) max = temp;
	}


	for (i = 1; i <= max; i++)
		for (j = 1; j <= arr[i]; j++)
			printf("%d\n", i);

	return 0;
}