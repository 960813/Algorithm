#include <stdio.h>
#include <string.h>

char ch[1000000];
int arr[26];
int main(void) {
	int i, max = -1;
	// �빮�� A=> 65
	// �ҹ��� a=> 97
	scanf("%s", ch);

	int len = strlen(ch);
	for (i = 0; i < len; i++) {
		if ('a' <= ch[i])
			ch[i] = ch[i] - 32;
		arr[ch[i] - 'A']++;
	}

	char answer = '?';
	for (i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			answer = i;
		}
		else if (arr[i] == max) {
			answer = '?';
		}
	}
	printf("%c", (answer == '?') ? '?' : answer + 65);

	return 0;
}