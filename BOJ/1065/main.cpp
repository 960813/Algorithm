#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

bool hansu(int x) {
	int num100 = x / 100;
	int num10 = (x % 100) / 10;
	int num1 = (x % 100) % 10;
	if ((num100 - num10) == (num10 - num1))
		return true;
	return false;
}

int n, x, tmp, cnt = 99;
int main() {
	scanf("%d", &n);

	if (n < 100) {
		printf("%d", n);
		return 0;
	}
	for (x = 100; x <= n; x++) {
		if(hansu(x))
			cnt++;
	}
	printf("%d", cnt);
}