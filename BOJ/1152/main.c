#include <stdio.h>
#include <string.h>

#define SIZE 1000000

char ch[SIZE];
int main(void) {
	int i, cnt = 0;

	scanf("%[^\n]", ch);

	int len = strlen(ch);

	if (len == 1) {
		if (ch[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}

	for (i = 1; i < len - 1; i++)
		if (ch[i] == ' ')
			cnt++;

	printf("%d\n", cnt + 1);
	return 0;
}