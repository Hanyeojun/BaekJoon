#pragma warning(disable: 4996)
#include <stdio.h>
int main(void) {
	int n = 0, cnt = 0;
	scanf("%d", &n);
	while (n--) {
		int input = 0, a = 0;
		scanf("%d", &input);
		for (a = 2; a < input; a++) {
			if (input % a == 0) {
				break;
			}
		}
		if (a == input) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}