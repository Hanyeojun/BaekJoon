#pragma warning(disable: 4996)
#include<stdio.h>
int main() {
	int remain[10] = {0};
	int num[42] = {};
	int cnt = 0, n = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &n);
		remain[i] = n % 42;	//42로 나눈 나머지 저장
	}
	for (int i = 0; i < 42; i++) { //42번 돌면서
		for (int j = 0; j < 10; j++) { //remain의 원소 10개 판별
			if (i == remain[j]) { //0~41까지 대응되는 remain 원소값이 있으면
				num[i]++; //대응되는 num의 원소를 1 증가
			}
		}
		if (num[i] != 0) { //num의 원소 중 0이 아닌 원소의 개수
			cnt++; //1증가
		}
	}
	printf("%d", cnt);
}