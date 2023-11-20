#include<stdio.h>
long long Operater(long long a, long long b) {
	return (a + b) * (a - b);
}
int main() {
	long long x, y;
	scanf("%lld %lld", &x, &y);
	printf("%lld", Operater(x, y));
}