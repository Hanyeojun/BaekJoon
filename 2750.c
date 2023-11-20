#pragma warning(disable: 4996)
#include<stdio.h>
#include<stdlib.h>
int main( ) {
	int n = 0, tmp = 0;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (a[j + 1] < a[j]) {
				tmp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}