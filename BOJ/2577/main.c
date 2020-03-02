#include <stdio.h>

int main(void) {
	int A = 0, B = 0, C = 0, SUM = 0;
	int arr[10] = { 0, }, i =0;
	scanf("%d %d %d", &A, &B, &C);
	SUM = A * B * C;
	while (SUM != 0) {
		arr[SUM % 10]++;
		SUM = SUM / 10;
	}
	for (i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}