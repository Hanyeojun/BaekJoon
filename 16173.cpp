// 점프왕 쩰리(small)
#include <iostream>
#include <queue>
using namespace std;
int N;
int arr[4][4];
bool visit[4][4];
int dx[] = {1, 0};
int dy[] = {0, 1};
int BFS(int a, int b) {
    queue<pair<int, int>> q;
    visit[a][b] = true;
    q.push({a, b});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (arr[x][y] == -1) {
            return 1;
        }
        for (int i = 0; i < 2; i++) {
            int nx = x + (dx[i] * arr[x][y]);  // 적혀있는 숫자만큼 오른쪽/아래로 움직일 수 있음
            int ny = y + (dy[i] * arr[x][y]);
            if (nx >= 1 && nx <= N && ny >= 1 && ny <= N && !visit[nx][ny]) {
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return 0;
}
int main() {
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }
    if (BFS(1, 1))
        cout << "HaruHaru";
    else
        cout << "Hing";
}