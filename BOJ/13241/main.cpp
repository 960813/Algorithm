#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

long long gcd(long long a, long long b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long lcm(long long a, long long b) {
	return a * b / gcd(a, b);
}

int main() {
	long long a, b;
	scanf("%lld %lld", &a, &b);

	printf("%lld", lcm(a, b));
}