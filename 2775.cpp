#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int tc = 0;
	cin >> tc;
	while (tc--) {
		int k = 0, n = 0;
		int arr[15][15] = {};
		cin >> k >> n;

		for (int i = 0; i < 15; i++) {	//초기화
			arr[0][i] = i;
		}

		for (int i = 1; i <= k; i++) {
			for (int j = 1; j <= n; j++) {
				arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
			}
		}
		
		cout << arr[k][n] << '\n';
	}
}

/*삼중 for문
for (int i = 1; i < 15; i++) {
			for (int j = 1; j < 15; j++) {
				for (int h = 1; h <= j; h++) {
					arr[i][j] += arr[i - 1][h];
				}
			}
		}
*/
/* 재귀함수 활용
int apart(int a, int b) {

	if (a == 0) {
		return b;
	} // 층 수가 0일 때는 해당 호수로 return
	if (b == 1) {
		return 1;
	}// 호 수가 1일 때는 무조건 1 return

	// 해당 호수의 같은 층 전 호수 + 해당 호수의 밑에 층 호수 의 수의 합
	// 재귀 함수 호출
	return (apart(a - 1, b) + apart(a, b - 1));
}
*/