#include<stdio.h>
int main() {
	int n = 0, cnt = 0;
	scanf("%d", &n);
	while (1) {
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		else {
			n -= 3;
			cnt++;
			if (n <= 0) {
				break;
			}
		}
	}
	if (n < 0) {
		printf("-1\n");
	}
	else {
		printf("%d\n", cnt);
	}
}