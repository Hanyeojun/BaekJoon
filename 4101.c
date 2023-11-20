#include<stdio.h>
int main() {
	while (1) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) return 0;
		if (a > b) printf("Yes\n");
		else if (a < b||a==b) printf("No\n");
	}
}