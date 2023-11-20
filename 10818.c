#include<stdio.h>
#include<stdlib.h>
int main() {
	int n = 0, min = 0, max = 0;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	printf("%d %d ", min, max);
}