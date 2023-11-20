#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	char arr[8][8];
	int cnt = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[i][j] == 'F') {
				if (i % 2 == 0 && j % 2 == 0) {
					cnt++;
				}
				else if (i % 2 == 1 && j % 2 == 1) {
					cnt++;
				}
			}
		}
	}
	cout << cnt << '\n';
}