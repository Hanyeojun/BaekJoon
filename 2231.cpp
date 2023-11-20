//분해합 계산
#include<iostream>
using namespace std;
int main() {
	int n = 0, result = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		int sum = 0, num = i;
		while (num != 0) { //자릿수마다 더하기
			sum += num % 10;
			num /= 10;
		}
		if (sum + i == n) { //분해합을 구하게 된다면 탈출
			result = i; //가장 작은 생성자 출력 => 오름차순으로 생성자를 탐색하므로 가장 처음 찾은 생성자가 정답
			break;
		}
	}
	cout << result;
	return 0;
}