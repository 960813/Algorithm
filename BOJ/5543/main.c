#include <stdio.h>

int answer(int arr[5]) {
	int ret = 4000;
	for (int i = 0; i < 3; i++) {
		for (int j = 3; j < 5; j++) {
			if ((arr[i] + arr[j] - 50) < ret)
				ret = arr[i] + arr[j] - 50;
		}
	}
	return ret;
}

int main(void) {
	int menu[5], i;

	for (i = 0; i < 5; i++) {
		scanf("%d", &menu[i]);
	}
	printf("%d", answer(menu));

	return 0;
}