#include <iostream>
#include <queue>
using namespace std;

bool visit[100001];  // 방문 확인
queue<pair<int, int>> q;

int BFS(int n, int k) {
    q.push({n, 0});
    visit[n] = true;
    while (!q.empty()) {
        int x = q.front().first;     // 위치
        int cnt = q.front().second;  // 이동 횟수
        q.pop();
        if (x == k) {  // 도착하면 종료
            return cnt;
        }
        if (x + 1 <= 100000 && !visit[x + 1]) {  // 범위 내이면서 방문 x이면
            q.push({x + 1, cnt + 1});            // 이동 & 이동 횟수 + 1
            visit[x + 1] = true;
        }
        if (x - 1 >= 0 && !visit[x - 1]) {
            q.push({x - 1, cnt + 1});
            visit[x - 1] = true;
        }
        if (x * 2 <= 100000 && !visit[x * 2]) {
            q.push({x * 2, cnt + 1});
            visit[x * 2] = true;
        }
    }
    return 0;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;
    cout << BFS(n, k);
    return 0;
}