// 현수막
#include <iostream>
#include <queue>
using namespace std;

int m, n, cnt;
int arr[250][250];
bool visit[250][250];
queue<pair<int, int>> q;
int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
int dy[] = {1, -1, 0, 0, -1, 1, -1, 1};

void BFS(int a, int b) {
    q.push({a, b});
    visit[a][b] = true;
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < m && ny < n && !visit[nx][ny] && arr[nx][ny]) {
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] && !visit[i][j]) {
                BFS(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}