#include<stdio.h>
int main() {
	int arr[10] = {};
	int sum = 0, avg, frq, num, cnt = 1;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	avg = sum / 10;

	for (int i = 0; i < 10; i++) {
		num = 1;
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) {
				num += 1;
			}
		}
		if (num >= cnt) {
			frq = arr[i];
			cnt = num;
		}
	}
	printf("%d\n%d", avg, frq);
}