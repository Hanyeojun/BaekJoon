// 뱀과 사다리 게임
#include <iostream>
#include <queue>
using namespace std;

int arr[101];
bool visit[101];
queue<pair<int, int>> q;

void BFS(int a, int c) {
    q.push({a, c});
    while (!q.empty()) {
        int l = q.front().first;     // 현재 좌표
        int cnt = q.front().second;  // 던진 횟수
        q.pop();
        for (int i = 1; i <= 6; i++) {  // 주사위 1 ~ 6
            int nl = l + i;             // 주사위값을 더한 좌표
            if (nl < 100) {
                while (arr[nl] != 0) {
                    nl = arr[nl];
                }
                if (!visit[nl]) {
                    q.push({nl, cnt + 1});
                    visit[nl] = 1;
                }
            } else if (nl == 100) {
                cout << cnt + 1;
                return;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;  // 사다리, 뱀
    int t1, t2;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {  // 사다리
        cin >> t1 >> t2;
        arr[t1] = t2;
    }
    for (int i = 0; i < m; i++) {  // 뱀
        cin >> t1 >> t2;
        arr[t1] = t2;
    }
    BFS(1, 0);  // 1부터 시작, 카운트 = 0
}