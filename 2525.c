#pragma warning(disable: 4996)
#include <stdio.h>
int main() {
	int h = 0, m = 0, t = 0;
	scanf("%d %d %d", &h, &m, &t);

	if (m + t < 60) {
		printf("%d %d", h, m + t % 60);
	}
	if (m + t >= 60) {
		if (h + ((m + t) / 60) < 24) {
			printf("%d %d", h + (m + t) / 60, (m + t) % 60);
		}
		else if (h + ((m + t) / 60) >= 24) {
			printf("%d %d", (h + (m + t) / 60) - 24, (m + t) % 60);
		}
	}
}
// ↑ 두 번째 시도 정답 코드

/*
첫 번째 시도 정답 코드
//hour 23시 이내, minute 59분 이내
	if (hour + ((minute + time) / 60) < 23 && minute + time <= 59) {
		printf("%d %d", hour + (minute + time) / 60, minute + time % 60);
	}
	//hour 23시 이내, minute 59분 초과
	if (hour + ((minute + time) / 60) < 24 && minute + time > 59) {
		printf("%d %d", hour + (minute + time) / 60, (minute + time) % 60);
	}
	//hour 23시 초과, minute 59분 초과
	if (hour + ((minute + time) / 60) >= 24 && minute + time > 59) {
		printf("%d %d", (hour + (minute + time) / 60) - 24, (minute + time) % 60);
	}*/

/*
★승훈이 코드★
#include <stdio.h>
int main() {
	int h, m, t, aT, r;
	scanf("%d %d %d", &h, &m, &t);
	aT = h * 60 + m + t;
	r = aT / 60;
	printf("%d %d", r >= 24 ? r - 24 : r, aT % 60);
}
*/

