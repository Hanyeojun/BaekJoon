#include<stdio.h>
int main() {
	int x, n, price[100] = {}, cnt[100] = {}, sum = 0;
	scanf("%d %d", &x, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &price[i], &cnt[i]);
		sum += price[i] * cnt[i];
	}
	if (x == sum) printf("Yes");
	if (x != sum) printf("No");
}