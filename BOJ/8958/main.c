#include <stdio.h>
#include <string.h>

char arr[80];
int streak;
int score;
int main() {
	int n, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%s", arr);
		for (j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				streak++;
				score += streak;
			}
			else {
				streak = 0;
			}
		}
		printf("%d\n", score);
		score = 0;
		streak = 0;
		memset(arr, 0, sizeof(arr));
		
	}


	return 0;
}