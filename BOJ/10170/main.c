#include <stdio.h>

char* ch[13] = {
	"NFC West       W   L  T",
	"-----------------------",
	"Seattle        13  3  0",
	"San Francisco  12  4  0",
	"Arizona        10  6  0",
	"St. Louis      7   9  0",
	"",
	"NFC North      W   L  T",
	"-----------------------",
	"Green Bay      8   7  1",
	"Chicago        8   8  0",
	"Detroit        7   9  0",
	"Minnesota      5  10  1"
};
int main(void) {
	int i;
	for (i = 0; i < sizeof(ch) / sizeof(char*); i++)
		printf("%s\n", ch[i]);

	return 0;
}