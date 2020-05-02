#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int a, b, c, n;
int main(void) {
	scanf("%d %d %d", &a, &b, &c);

	if (b >= c)
		printf("-1");
	else
		printf("%d", a / (c - b) + 1);
	return 0;
}