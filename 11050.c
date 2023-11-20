#include<stdio.h>
int Factorial(int a) {
	int result = 1;
	for (int i = 1; i <= a; i++) {
		result *= i;
	}
	return result;
}
int main() {
	int n, k, a, b, c;
	scanf("%d %d", &n, &k);
	a = Factorial(n);
	b = Factorial(k);
	c = Factorial(n - k);
	printf("%d\n", a / (b * c));
}
//n! / k!(n-k)!