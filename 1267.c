#include<stdio.h>
int main() {
	int n, c[20], y = 0, m = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &c[i]);
		y += ((c[i] / 30) + 1) * 10;
		m += ((c[i] / 60) + 1) * 15;
	}
	if (y == m) printf("Y M %d", y);
	else if (y > m) printf("M %d", m);
	else printf("Y %d", y);
}