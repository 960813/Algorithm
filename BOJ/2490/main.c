#include <stdio.h>

int arr[4];
char* ans[5] = { "D", "C", "B", "A", "E" };
int main(void) {
	int i, tc = 3;
	while (tc--) {
		int sum = 0;
		for (i = 0; i < 4; i++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		printf("%s\n", ans[sum]);
	}
	return 0;
}