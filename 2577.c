#include<stdio.h>
int main() {
	int arr[10] = {}, a = 0, b = 0, c = 0, n = 0;
	scanf("%d %d %d", &a, &b, &c);
	n = a * b * c;
	for (int i = n; i > 0; i /= 10) {
		arr[i % 10]++;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}