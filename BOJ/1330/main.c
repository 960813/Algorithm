#include <stdio.h>

int main(void) {
	int n1 = 0, n2 = 0;
	scanf("%d %d", &n1, &n2);

	if (n1 > n2) printf(">");
	else if (n1 == n2) printf("==");
	else printf("<");
	
	return 0;
}