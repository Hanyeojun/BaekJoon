// 데스 나이트
#include <iostream>
#include <queue>
using namespace std;

int board[200][200];
int n, r1, c1, r2, c2;
bool visit[200][200];
queue<pair<pair<int, int>, int>> q;
const int dx[] = {-2, -2, 0, 0, 2, 2};
const int dy[] = {-1, 1, -2, 2, -1, 1};

int BFS(int a, int b) {
    q.push({{a, b}, 0});
    visit[a][b] = 1;

    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;
        q.pop();
        if (x == r2 && y == c2) {
            return cnt;
        }
        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx >= 0 && ny >= 0 && nx < n && ny < n && !visit[nx][ny]) {
                visit[nx][ny] = 1;
                q.push({{nx, ny}, cnt + 1});
            }
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    cin >> r1 >> c1 >> r2 >> c2;
    cout << BFS(r1, c1);
}