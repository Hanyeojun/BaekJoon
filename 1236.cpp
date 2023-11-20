// 성 지키기
#include <iostream>
using namespace std;
char C[51][51];
int x[51], y[51];
int main() {
    int n, m, xcnt = 0, ycnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> C[i][j];
            if (C[i][j] == 'X') {
                x[j] = 1;
                y[i] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        if (x[i] == 0) xcnt++;
    }
    for (int i = 0; i < n; i++) {
        if (y[i] == 0) ycnt++;
    }
    cout << max(xcnt, ycnt);
}