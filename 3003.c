#include<stdio.h>
int main() {
	int chess[6] = { 1,1,2,2,2,8 }, input[6] = {};
	for (int i = 0; i < 6; i++) {
		scanf("%d", &input[i]);
	}
	for (int i = 0; i < 6; i++) {
		printf("%d ", chess[i] - input[i]);
	}
}