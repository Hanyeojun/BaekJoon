#pragma warning(disable: 4996)
#include<stdio.h>
int main() {
	int n = 0, v = 0, cnt = 0;
	int arr[100] = {};
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	for (int j = 0; j < n; j++) {
		if (arr[j] == v) {
			cnt++;
		}
	}
	printf("%d", cnt);
}