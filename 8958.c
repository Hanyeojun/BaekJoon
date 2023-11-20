#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>
int main(void) {
	int tc = 0;
	scanf("%d", &tc);

	while (tc--) {
		char a[80] = {};
		int sum = 0, score = 1;
		scanf("%s", a);
		for (int i = 0; i < strlen(a); i++) {	//문자열의 길이만큼 반복
			if (a[i] == 'O') {
				sum += score;
				score++;
			}
			if (a[i] == 'X') {
				score = 1;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}