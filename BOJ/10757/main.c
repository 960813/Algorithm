#include <stdio.h>
#include <string.h>

#define atoi(X) (X==0?0:X-'0')

void reverse(char* txt, int n) {
	int i;
	for (i = 0; i < n / 2; i++) {
		char tmp = txt[i];
		txt[i] = txt[n - 1 - i];
		txt[n - 1 - i] = tmp;
	}
}

char a[100000], b[100000], answer[100000];
int main(void) {
	int i;
	scanf("%s %s", a, b);

	int aLen = (int)strlen(a);
	int bLen = (int)strlen(b);
	reverse(a, aLen);
	reverse(b, bLen);

	int tLen = aLen > bLen ? aLen : bLen;

	int carry = 0;
	for (i = 0; i <= tLen; i++) {
		char num = atoi(a[i]) + atoi(b[i]) + carry;

		if (num > 9) carry = 1;
		else carry = 0;

		num = num % 10 + '0';
		answer[i] = num;
	}
	if (answer[tLen] == '0') answer[tLen] = 0;

	reverse(answer, strlen(answer));
	printf("%s", answer);

	return 0;
}