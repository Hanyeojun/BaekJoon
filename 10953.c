#include<stdio.h>
int main() {
	int tc, a, b;
	scanf("%d", &tc);
	while (tc--) {
		int a, b;
		char c;
		scanf("%d %c %d", &a, &c, &b);
		printf("%d\n", a + b);
	}
}