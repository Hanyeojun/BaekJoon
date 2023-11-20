// 중복조합
#include <algorithm>
#include <iostream>
using namespace std;
int n, m, arr[8], res[8];
void Cout() {
    for (int i = 0; i < m; i++) {
        cout << res[i] << " ";
    }
    cout << '\n';
}
void DFS(int start, int cnt) {
    if (cnt == m) {
        Cout();
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
        cin >> arr[i];
    }
    sort(arr, arr + n);
    DFS(0, 0);
}