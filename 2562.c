#include<stdio.h>
int main() {
	int a[9] = {}, max = 0, n = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (int i = 1; i < 9; i++) {
		if (a[i] > max) {
			max = a[i];
			n = i;
		}
	}
	printf("%d\n%d\n", max, n+1);
}