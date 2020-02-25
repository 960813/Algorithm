#include <stdio.h>

int main(void) {
	short i = 0, arr[9] = { 0, }, max = 0;

	for (i = 0; i < 9; i++) {
		scanf("%hd", &arr[i]);
		if (arr[max] < arr[i])
			max = i;
	}
	printf("%hd\n%hd", arr[max], max + 1);



	return 0;
}