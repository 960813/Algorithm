#include <stdio.h>

int arr[9];
int main(void) {
	int i, asc = 0, desc = 0;
	for (i = 1; i <= 8; i++) {
		scanf("%d", &arr[i]);
	}

	for (i = 1; i <= 8; i++) {
		if (arr[i] == i)
			asc = 1;
		else {
			asc = 0;
			break;
		}
	}
	for (i = 1; i <= 8; i++) {
		if (arr[i] == 9 - i)
			desc = 1;
		else {
			desc = 0;
			break;
		}
	}

	if (asc)
		printf("ascending");
	else if (desc)
		printf("descending");
	else
		printf("mixed");

	return 0;
}