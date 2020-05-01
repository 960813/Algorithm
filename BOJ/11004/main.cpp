#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void) {
	int n, k, i;
	scanf("%d %d", &n, &k);

	int* arr = new int[n];
	int num;

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	sort(&arr[0], &arr[n]);

	printf("%d", arr[k - 1]);
	return 0;
}