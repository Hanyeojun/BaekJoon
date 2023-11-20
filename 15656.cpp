// 중복순열
#include <algorithm>
#include <iostream>
using namespace std;
int n, m;
int arr[7], res[7];
void Cout() {
    for (int i = 0; i < m; i++) {
        cout << res[i] << " ";
    }
    cout << '\n';
}

void DFS(int cnt) {
    if (cnt == m) {
        Cout();
        return;
    }
    for (int i = 0; i < n; i++) {
        res[cnt] = arr[i];
        DFS(cnt + 1);
    }
}

int main() {
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    DFS(0);
}