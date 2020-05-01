#include <stdio.h>
#include <string.h>

char arr[100];
int main(void) {
	int i;
	scanf("%s", arr);

	for (i = 1; i <= (int)strlen(arr); i++) {
		printf("%c", arr[i - 1]);
		if (i % 10 == 0)
			printf("\n");
	}

	return 0;
}