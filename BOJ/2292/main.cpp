#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, i = 1, ans = 1;
int main() {
	scanf("%d", &n);

	while (i < n)
		i += ans++ * 6;

	printf("%d", ans);
}