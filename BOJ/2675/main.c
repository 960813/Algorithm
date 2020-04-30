#include <stdio.h>
#include <string.h>

char ch[20];
int main(void) {
	int tc, i, j, k, r;
	scanf("%d", &tc);

	while (tc--) {
		scanf("%d", &r);
		scanf("%s", ch);

		for (j = 0; j < (int)strlen(ch); j++)
			for (k = 0; k < r; k++)
				printf("%c", ch[j]);
		printf("\n");

		memset(ch, 0, sizeof(ch));
	}

	return 0;
}