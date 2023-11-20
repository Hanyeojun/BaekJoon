#include<stdio.h>
#include<math.h>
int main() {
	int n, m,sum = 0;
	scanf("%d", &n);
	while (n != 0) {
		m = n % 10;
		sum += pow(m, 5);
		n /= 10;
	}
	printf("%d", sum);
}