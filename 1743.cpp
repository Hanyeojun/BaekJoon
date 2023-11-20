// 음식물 피하기
#include <iostream>
#include <queue>
using namespace std;

int N, M, K, maxC;
int path[101][101];
bool visit[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void BFS(int a, int b) {
    int cnt = 1;
    visit[a][b] = true;
    q.push({a, b});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= M) {
                if (!visit[nx][ny] && path[nx][ny] == 1) {
                    cnt++;
                    visit[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
    if (cnt > maxC) {
        maxC = cnt;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M >> K;
    for (int i = 0; i < K; i++) {
        int r, c;
        cin >> r >> c;
        path[r][c] = 1;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (path[i][j] == 1) {
                BFS(i, j);
            }
        }
    }
    cout << maxC;
}