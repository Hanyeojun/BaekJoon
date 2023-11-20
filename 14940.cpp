// 쉬운 최단거리
#include <iostream>
#include <queue>
using namespace std;
int mapp[1001][1001];
bool visit[1001][1001];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
queue<pair<int, int>> q;

void BFS(int n, int m) {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (!visit[nx][ny]) {
                    mapp[nx][ny] = mapp[x][y] + 1;  // 거리 계산
                    visit[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mapp[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mapp[i][j] == 2) {  // 목표지점
                mapp[i][j] = 0;
                visit[i][j] = 1;
                q.push({i, j});
            } else if (mapp[i][j] == 0) {  // 갈 수 없는 땅
                visit[i][j] = 1;
            }
        }
    }
    BFS(n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (!visit[i][j])  // 도달할 수 없는 위치일 때
                cout << -1 << ' ';
            else
                cout << mapp[i][j] << ' ';
        }
        cout << '\n';
    }
}