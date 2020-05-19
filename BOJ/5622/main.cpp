#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int dial[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
char word[16];
int i;
int sec;
int main() {
	scanf("%s", word);
	for (; i < (int)strlen(word); i++) {
		sec += dial[word[i] - 'A'];
	}
	printf("%d", sec);
}