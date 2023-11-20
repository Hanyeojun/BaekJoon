#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int tc = 0;
	scanf("%d", &tc);
	while (tc--) {
		int x1 = 0, y1 = 0, r1 = 0, x2 = 0, y2 = 0, r2 = 0;
		double d = 0;	//두 원의 원점 사이의 거리
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (r1 + r2 < d) {	//두 원이 겹치지 않고 
			printf("0\n"); //d가 두 원의 반지름의 합보다 클 때
		}
		else if (abs(r1 - r2) > d) { //d가 두 원의 반지름의 차보다 작을 때
			printf("0\n");
		}
		else if (d == 0 && r1 == r2) { //두 원이 일치할 때(무한대)
			printf("-1\n");
		}
		else if (r1 + r2 == d) { //두 원이 외접할 때
			printf("1\n");
		}
		else if (abs(r1 - r2) == d) { //두 원이 내접할 때
			printf("1\n");
		}
		else //두 원이 겹쳐서 교점이 2개 생길 때
		{
			printf("2\n");
		}
	}
}
//주어진 두 점을 원점으로 한 두 원의 교점의 개수를 구해야함
//