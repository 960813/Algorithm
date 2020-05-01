#include <stdio.h>
#include <string.h>

char arr[100];
int ans[26];
int main(void) {
	int i;
	scanf("%s", arr);

	for (i = 0; i < (int)strlen(arr); i++)
		ans[arr[i] - 97]++;

	for (i = 0; i < 26; i++)
		printf("%d ", ans[i]);


	return 0;
}