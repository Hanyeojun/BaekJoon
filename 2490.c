#include<stdio.h>
int main() {
	for (int i = 0; i < 3; i++) {
		int arr[4] = {}, sum = 0;
		for (int i = 0; i < 4; i++) {
			scanf("%d", &arr[i]);
			sum += arr[i];
		}
		if (sum == 3) printf("A\n");
		else if (sum == 2) printf("B\n");
		else if (sum == 1) printf("C\n");
		else if (sum == 0) printf("D\n");
		else if (sum == 4) printf("E\n");
	}
}
//도(0,1,1,1) 개(0,0,1,1) 걸(0,0,0,1) 윷(0,0,0,0) 모(1,1,1,1)