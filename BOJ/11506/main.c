#include <stdio.h>

int main(void) {
	char c[] = { 0xEF, 0xBF, 0xBD, 0 };
	printf("%s", c);
	return 0;
}