#include <stdio.h>
int main() {
	int scr, sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &scr);
		if (scr < 40) sum += 40;
		else sum += scr;
	}
	printf("%d", sum / 5);
}