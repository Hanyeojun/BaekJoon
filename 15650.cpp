#include <iostream>
using namespace std;
// 조합 구현을 통한 해결
int n, m;
int arr[8];     // 입력
bool visit[8];  // 방문확인
void DFS(int cnt, int start) {
    if (cnt == m) {
        for (int i = 0; i < n; i++) {
            if (visit[i]) {
                cout << arr[i] << " ";
            }
        }
        cout << '\n';
        return;
    } else {
        for (int i = start; i < n; i++) {
            if (visit[i]) continue;  // 중복허용x
            visit[i] = true;
            DFS(cnt + 1, i + 1);
            visit[i] = false;
        }
    }
}
int main() {
    cin >> n >> m;
    int cnt = 0, start;  // 선택한 개수, 시작지점
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
        visit[i] = false;
    }
    DFS(0, 0);
}