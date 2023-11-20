#include "iostream"
#include "queue"
using namespace std;
int tomato[1000][1000];
queue<pair<int, int>> q;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, n, day = 0; // 가로칸 수, 세로칸 수
    int dx[4] = { 1, -1, 0, 0 };
    int dy[4] = { 0, 0, 1, -1 };
    cin >> m >> n;

    for (int i = 0; i < n; i++) { //토마토 보관
        for (int j = 0; j < m; j++) {
            cin >> tomato[i][j];
            if (tomato[i][j] == 1) {
                q.push({ i,j });
            }
        }
    }
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m || tomato[nx][ny] == -1)
                continue;
            if (tomato[nx][ny] == 0) {
                tomato[nx][ny] = tomato[x][y] + 1;
                q.push({ nx,ny });
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tomato[i][j] == 0) {
                cout << -1;
                return 0;
            }
        }
    }
    for (int i = 0; i < n; i++) { //반복문 돌면서 tomato배열에 저장된 값 중 최댓값이 걸린 시간
        for (int j = 0; j < m; j++) {
            day = max(day, tomato[i][j] - 1);
        }
    }
    cout << day;
}