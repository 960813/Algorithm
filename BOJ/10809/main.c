#include <stdio.h>
#include <string.h>

char ch[100];
int main(void) {
	int i;

	scanf("%s", ch);
	for (char c = 'a'; c <= 'z'; c++) {
		int pos = -1;
		for (i = 0; i < (int)strlen(ch); i++) {
			if (ch[i] == c) {
				pos = i;
				break;
			}
		}
		printf("%d ", pos);
	}

	return 0;
}