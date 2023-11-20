#pragma warning(disable: 4996)
#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int n = 0, m = 0;
	double sum = 0, result = 0;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	//동적할당
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	//최댓값
	m = arr[0];
	for (int i = 0; i < n; i++) {
		if (arr[i] > m) {
			m = arr[i];
		}
	}
	//평균계산
	for (int i = 0; i < n; i++) {
		sum += (double)arr[i] / m * 100;
	}
	result = sum / n;
	printf("%lf\n", result);

	free(arr);
}