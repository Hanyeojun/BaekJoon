#include<stdio.h>
int main() {
	int n, avg;
	scanf("%d %d", &n, &avg);
	printf("%d\n", n * (avg - 1) + 1);
}