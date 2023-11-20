#include<stdio.h>
int main() {
	int score[5][4];
	int high = 0, sum = 0, one = 0;
	for (int i = 0; i < 5; i++) {
		sum = 0;
		for (int j = 0; j < 4; j++) {
			scanf("%d", &score[i][j]);
			sum += score[i][j];
		}
		if (sum > high) {
			high = sum;
			one = i + 1;
		}
	}
	printf("%d %d\n", one, high);
}