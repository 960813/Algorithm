#include <stdio.h>
#include <string.h>
#include <math.h>

long long ans;
char* color[10] = { "black","brown","red","orange","yellow","green","blue","violet","grey","white" };
int main(void) {
	char ch[7] = { 0 };
	int tc = 3, i;
	while (tc--) {
		scanf("%s", ch);
		for (i = 0; i < 10; i++) {
			if (strcmp(ch, color[i]) == 0) {
				if (tc == 2)
					ans += (long long)i * 10;
				else if (tc == 1)
					ans += i;
				else
					ans *= (long long)pow(10, i);
			}
		}
	}
	printf("%lld", ans);

	return 0;
}