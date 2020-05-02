#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int A, B, V;
int main() {
	scanf("%d %d %d", &A, &B, &V);
	printf("%d", (V - B - 1) / (A - B) + 1);
}