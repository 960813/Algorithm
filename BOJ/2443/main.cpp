#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = n; i >= 1; i--) {
		for (j = 0; j < n - i; j++)
			printf(" ");
		for (j = 0; j < (i * 2) - 1; j++)
			printf("*");
		printf("\n");
	}
}