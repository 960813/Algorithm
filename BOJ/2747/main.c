#include <stdio.h>

int arr[46];

int f(int n) {
	if (n <= 1) return n;

	if (arr[n]) return arr[n];

	return arr[n - 1] + arr[n - 2];
}

int main(void) {
	int n, i;

	scanf("%d", &n);

	for (i = 0; i <= 45; i++) 
		arr[i] = f(i);
	
	printf("%d", f(n));

	return 0;
}