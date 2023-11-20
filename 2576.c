#include<stdio.h>
int main() {
	int arr[7] = { }, min = 100, sum = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 1) {
			sum += arr[i];
			if (arr[i] < min) {
				min = arr[i];
			}
		}
	}
	if (sum == 0) printf("-1");
	else printf("%d\n%d",sum,min);
}