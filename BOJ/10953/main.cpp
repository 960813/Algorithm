#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int T, A, B;
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		scanf("%d,%d", &A, &B);
		printf("%d\n", A + B);
	}
}