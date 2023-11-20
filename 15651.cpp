#include <iostream>
using namespace std;
// 중복순열 구현을 통한 해결
int n, m;
int arr[7];
int res[7];
void DFS(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
        return;
    }
    for (int i = 0; i < n; i++) {
        res[cnt] = arr[i];
        DFS(cnt + 1);
    }
}
int main() {
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    DFS(0);
}