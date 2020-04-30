#include <stdio.h>

int daysOfMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
char* dayOfWeek[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

int main(void) {
	int month, day, i;
	scanf("%d %d", &month, &day);

	for (i = 1; i < month; i++) {
		day += daysOfMonth[i];
	}

	printf("%s\n", dayOfWeek[day % 7]);

	return 0;
}