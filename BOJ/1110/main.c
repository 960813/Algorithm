#include <stdio.h>

int main(void) {
	short n = 0, temp = 0, result = -1, cnt = 0;
	scanf("%hd", &n);
	temp = n;
	while (n != result) {
		result = (temp % 10)*10 + (temp / 10 + temp % 10) % 10;
		temp = result;
		cnt++;
	}
	printf("%hd", cnt);
	return 0;
}