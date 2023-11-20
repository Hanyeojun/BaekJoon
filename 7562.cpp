#include <string.h>

#include <iostream>
#include <queue>
using namespace std;

int board[301][301];                       // 게임판
bool visit[301][301];                      // 방문확인
int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};  // x축
int dy[8] = {-1, -2, -2, -1, 1, 2, 2, 1};  // y축
queue<pair<int, int>> q;

void BFS(int L, int x, int y, int a, int b) {
    q.push({x, y});
    visit[x][y] = true;
    while (!q.empty()) {
        int nowx = q.front().first;
        int nowy = q.front().second;
        q.pop();
        if (nowx == a && nowy == b) {
            cout << board[nowx][nowy] << '\n';
            while (!q.empty()) q.pop();
            break;
        }
        for (int i = 0; i < 8; i++) {
            int nx = nowx + dx[i];
            int ny = nowy + dy[i];
            if (nx >= 0 && nx < L && ny >= 0 && ny < L && !visit[nx][ny]) {
                q.push({nx, ny});
                visit[nx][ny] = true;
                board[nx][ny] = board[nowx][nowy] + 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int L, x, y, a, b;
        cin >> L;
        cin >> x >> y >> a >> b;
        BFS(L, x, y, a, b);
        memset(visit, false, sizeof(visit));
        memset(board, 0, sizeof(board));
    }
}