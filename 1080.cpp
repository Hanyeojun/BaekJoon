// 행렬
#include <iostream>
using namespace std;
int mA[50][50];
int mB[50][50];
int main() {
    string mtx;
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> mtx;
        for (int j = 0; j < m; j++) {
            mA[i][j] = mtx[j] - '0';
        }
    }
    for (int i = 0; i < n; i++) {
        cin >> mtx;
        for (int j = 0; j < m; j++) {
            mB[i][j] = mtx[j] - '0';
        }
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < m - 2; j++) {
            if (mA[i][j] != mB[i][j]) {
                cnt++;
                for (int a = i; a < i + 3; a++) {
                    for (int b = j; b < j + 3; b++) {
                        mA[a][b] = !mA[a][b];
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mA[i][j] != mB[i][j]) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << cnt;
}