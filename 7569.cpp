#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int tomato[100][100][100];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int m, n, h, day = 0;  // 가로칸 수, 세로칸 수
    int dx[6] = {1, -1, 0, 0, 0, 0};
    int dy[6] = {0, 0, 1, -1, 0, 0};
    int dz[6] = {0, 0, 0, 0, 1, -1};
    queue<pair<pair<int, int>, int>> q;

    cin >> m >> n >> h;

    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {  // 토마토 보관
            for (int j = 0; j < m; j++) {
                cin >> tomato[i][j][k];
                if (tomato[i][j][k] == 1) {  // 토마토 있으면
                    q.push({{i, j}, k});     // 큐에 저장
                }
            }
        }
    }
    while (!q.empty()) {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int z = q.front().second;
        q.pop();
        for (int i = 0; i < 6; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nz = z + dz[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h || tomato[nx][ny][nz] == -1) continue;
            if (tomato[nx][ny][nz] == 0) {
                tomato[nx][ny][nz] = tomato[x][y][z] + 1;
                q.push({{nx, ny}, nz});
            }
        }
    }

    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (tomato[i][j][k] == 0) {
                    cout << -1;
                    return 0;
                }
            }
        }
    }
    for (int k = 0; k < h; k++) {
        for (int i = 0; i < n; i++) {  // 반복문 돌면서 tomato배열에 저장된 값 중 최댓값이 걸린 시간
            for (int j = 0; j < m; j++) {
                day = max(day, tomato[i][j][k] - 1);
            }
        }
    }
    cout << day;
}