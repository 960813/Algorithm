#include <stdio.h>
#include <string.h>

char ch[101];
int main(void) {
	while (fgets(ch, sizeof(ch), stdin) != NULL)
		printf("%s", ch);

	return 0;
}