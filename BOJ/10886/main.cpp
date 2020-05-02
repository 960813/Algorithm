#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int n, t, i, vote[2];
int main() {
	scanf("%d", &n);
	for (; i < n; i++) {
		scanf("%d", &t);
		vote[t]++;
	}

	if (vote[0] > vote[1])
		printf("Junhee is not cute!");
	else
		printf("Junhee is cute!");
}