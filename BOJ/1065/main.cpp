#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, x, tmp, cnt = 99;
int main() {
	scanf("%d", &n);

	if (n < 100) {
		printf("%d", n);
		return 0;
	}
	for (x = 100; x <= n; x++) {
		int num100 = x / 100;
		int num10 = (x % 100) / 10;
		int num1 = (x % 100) % 10;
		if ((num100 - num10) == (num10 - num1))
			cnt++;
	}
	printf("%d", cnt);
}