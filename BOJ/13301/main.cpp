#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

long long dp[81];
long long f(int n) {
	if (n <= 1) return dp[n] = n;

	if (dp[n]) return dp[n];

	return dp[n] = f(n - 1) + f(n - 2);
}

int n;
int main() {
	scanf("%d", &n);
	printf("%lld", f(n) * 2 + f(n + 1) * 2);
}