#include <stdio.h>

int main(void) {
	int n1 = 0, n2 = 0, n3= 0;
	scanf("%d %d %d", &n1, &n2,&n3);
	printf("%d\n", (n1 + n2) % n3);
	printf("%d\n", (n1%n3+n2%n3)%n3);
	printf("%d\n", (n1 * n2) % n3);
	printf("%d", (n1%n3 * n2%n3)%n3);


	return 0;
}