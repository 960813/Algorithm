#include <stdio.h>

int main(void) {
	int num = 0;
	int arr[10], i = 0, j = 0, cnt = 0;
	
	for (i = 0; i < 10; i++)
		arr[i] = -1;

	for (i = 0; i < 10; i++) {
		scanf("%d", &num);
		for (j = 0; j < 10; j++) {
			if (arr[j] == num % 42)
				break;
			if (j == 9)
				cnt++;
		}
		arr[i] = num % 42;
	}
	printf("%d", cnt);
	return 0;
}