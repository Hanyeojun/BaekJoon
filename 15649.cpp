#include <iostream>
#include <vector>
using namespace std;
vector<int> res;
int n, m, arr[8];
bool visit[8];
// 순열 구현을 통한 해결
void DFS(int cnt) {
    if (cnt == m) {
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << '\n';
        return;
    } else {
        for (int i = 0; i < n; i++) {
            if (visit[i]) continue;
            visit[i] = true;
            res.push_back(arr[i]);
            DFS(cnt + 1);
            res.pop_back();
            visit[i] = false;
        }
    }
}
int main() {
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        visit[i] = false;
    }
    DFS(0);
}