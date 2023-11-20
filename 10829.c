#include<stdio.h>
int main() {
	long long int k;
	int i = 0;
	int arr[100];
	scanf("%lld", &k);
	for (i = 0; k != 1; i++) {
		if (k % 2 == 0) {
			k /= 2;
			arr[i] = 0;
		}
		else if (k % 2 == 1) {
			k /= 2;
			arr[i] = 1;
		}
	}
	i--;
	printf("1");
	for (i; i >= 0; i--) {
		printf("%d", arr[i]);
	}
}