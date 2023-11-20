// 보물섬
#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int r, c;
char mapp[51][51];
int dist[51][51];
bool visit[51][51];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

int BFS(int a, int b) {
    int maxDist = 0;
    visit[a][b] = true;
    dist[a][b] = 1;
    q.push({a, b});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && nx < r && ny >= 0 && ny < c) {
                if (mapp[nx][ny] == 'L' && !visit[nx][ny]) {
                    visit[nx][ny] = true;
                    dist[nx][ny] = dist[x][y] + 1;
                    q.push({nx, ny});
                    maxDist = max(maxDist, dist[nx][ny]);
                }
            }
        }
    }
    return maxDist - 1;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        cin >> str;
        for (int j = 0; j < c; j++) {
            mapp[i][j] = str[j];
        }
    }
    int ans = -1;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (mapp[i][j] == 'L') {
                ans = max(ans, BFS(i, j));
                memset(dist, 0, sizeof(dist));
                memset(visit, false, sizeof(visit));
            }
        }
    }
    cout << ans;
}