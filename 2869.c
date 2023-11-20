#pragma warning(disable: 4996)
#include<stdio.h>
int main() {
	int a = 0, b = 0, v = 0, almost, day,result;
	scanf("%d %d %d", &a, &b, &v);
	if (v == a) {
		printf("1\n");
		return 0;
	}
	almost = v - a; //다음날 무조건 도착하게 되는 거리
	day = a - b; //낮과 밤 동안의 이동거리의 합

	if (almost % day) { //almost의 거리까지 가는데 걸리는 시간을 계산할 때 정수값이 나오지 않으면 +1
		result = (almost / day) + 1;
	}
	else {
		result = almost / day;
	}
	printf("%d\n", result + 1);
}