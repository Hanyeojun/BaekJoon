#pragma warning(disable: 4996)
#include <stdio.h>
#include<math.h>

int main() {
	int n;
	int r = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n);
		r += pow(n,2);
	}
	r %= 10;
	printf("%d", r);
	return 0;
}