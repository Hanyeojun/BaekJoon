#include <iostream>
using namespace std;
// 중복조합 구현을 통한 해결
int n, m;
int arr[8];
int res[8];
void DFS(int start, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = start; i < n; i++) {
        res[cnt] = arr[i];
        DFS(i, cnt + 1);
    }
}

int main() {
    int start = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    DFS(0, 0);
}