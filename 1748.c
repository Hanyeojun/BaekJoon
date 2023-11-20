#include<stdio.h>
int main(void) {
	int n = 0, cnt = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i *= 10) {
		cnt += n - (i - 1);
	}
	printf("%d", cnt);
}

/*
1의 자리 : n
10의 자리 : n-9
100의 자리 : n-99
1000의 자리 : n-999  ....
=> x의 자리 : n-(x-1)
ex) n = 13이면, 10의 자리 : 13-(10-1)=13-9=4. =>10,11,12,13으로 총 4개. 
*/