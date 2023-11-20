#include<stdio.h>
int main() {
	long long s = 0, sum = 0, a = 1;
	int cnt = 0;
	scanf("%lld", &s);
	while (1) {
		sum += a;
		cnt++;
		a++;

		if (sum > s) {
			break;
		}
	}
	printf("%d", cnt - 1);
}

/*
while(1){
		sum += num;
		cnt++;
		if(sum > S){
			cnt--;
			break;
		}
		num++;
	}
*/