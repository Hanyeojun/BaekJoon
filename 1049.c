//끊어진 줄 N개, 상품 종류-> 6줄 1세트, 낱개 1개, 브랜드 종류 M개
//끊어진 줄의 개수, 브랜드 수 // 브랜드 1세트, 낱개 개수 입력
#pragma warning(disable: 4996)
#include<stdio.h>
int main() {
	int n = 0, m = 0, a = 0, b = 0, set = 1001, piece = 1001, x = 0, y = 0, cost = 0;
	//끊어진 줄 n개, 브랜드 m개, 세트값 입력 a, 낱개값 입력 b, 세트 가격 set, 낱개 가격 piece, 필요 세트 개수 x, 필요 낱개 개수 y, 결과 cost
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &a, &b);
		if (a < set) {
			set = a;
		}
		if (b < piece) {
			piece = b;
		}
	}
	x = n / 6;
	y = n % 6;
	//세트
	cost += (set < piece * 6 ? set : piece * 6) * x;
	/* 위의 삼항연산자 식과 동일한 의미의 if문
	if (n / 6 > 0) { // n / 6이 0보다 클 때
		if (set < piece * 6) { //세트 가격이 낱개 6개보다 쌀 때
			cost += set * x;    //(세트) * (필요한 세트 개수 x)
		}
		else { //세트 가격이 낱개 6보다 비쌀 때
			cost += (piece * 6) * x; //(낱개 6개) * x
		}
	}*/
	//낱개
	if (set > piece * y) { //세트보다 낱개 * y가 쌀 때
		cost += piece * y; //낱개 * y
	}
	else { //세트보다 낱개 *y가 비쌀 때
		cost += set; //cost = 세트값
	}
	printf("%d", cost);
}