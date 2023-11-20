#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[101][101], brr[101][101], res[101][101] = {};
	int n, m, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> m >> k;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> brr[i][j];
		}
	}

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < k; b++) {
			for (int c = 0; c < m; c++) {
				res[a][b] += arr[a][c] * brr[c][b];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cout << res[i][j] << " ";
		}
		printf("\n");
	}
}