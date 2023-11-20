// 아기 상어2
#include <iostream>
#include <queue>
using namespace std;

int sea[50][50];
int dist[50][50];
queue<pair<int, int>> q;
int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int n, m, ans = -1;

void BFS() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= m || sea[nx][ny] == 1 || dist[nx][ny] > 0) {
                continue;
            }
            dist[nx][ny] = dist[x][y] + 1;
            q.push({nx, ny});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> sea[i][j];
            if (sea[i][j] == 1) {
                q.push({i, j});
                dist[i][j] = 0;
            }
        }
    }
    BFS();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (ans < dist[i][j]) {
                ans = dist[i][j];
            }
        }
    }
    cout << ans;
}