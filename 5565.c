#include<stdio.h>
int main() {
	int num, sum = 0;
	int arr[9] = {};
	scanf("%d", &num);
	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%d", num - sum);
}