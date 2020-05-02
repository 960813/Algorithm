#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

bool desc(int a, int b) {
	return a > b;
}

int n, t, i;
vector<int> vc = vector<int>();
int main() {
	scanf("%d", &n);
	for (; i < n; i++) {
		scanf("%d", &t);
		vc.push_back(t);
	}

	sort(vc.begin(), vc.end(), desc);

	for (i = 0; i < n; i++)
		printf("%d\n", vc[i]);
}