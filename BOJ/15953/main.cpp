#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int t, a, b;
int main() {
	scanf("%d", &t);
	while (t--) {
		int reward = 0;
		scanf("%d %d", &a, &b);

		if (a != 0) {
			if (a <= 1)			reward += 5000000;
			else if (a <= 3)	reward += 3000000;
			else if (a <= 6)	reward += 2000000;
			else if (a <= 10)	reward += 500000;
			else if (a <= 15)	reward += 300000;
			else if (a <= 21)	reward += 100000;
		}

		if (b != 0) {
			if (b <= 1)			reward += 5120000;
			else if (b <= 3)	reward += 2560000;
			else if (b <= 7)	reward += 1280000;
			else if (b <= 15)	reward += 640000;
			else if (b <= 31)	reward += 320000;
		}
		printf("%d\n", reward);
	}
}