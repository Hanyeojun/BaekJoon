// Best Grass
#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int R, C;
char ground[101][101];
bool visit[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void BFS(int a, int b) {
    visit[a][b] = true;
    q.push({a, b});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < R && ny >= 0 && ny < C) {
                if (!visit[nx][ny] && ground[nx][ny] == '#') {
                    visit[nx][ny] = true;
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main() {
    int cnt = 0;
    string str;
    cin >> R >> C;
    for (int i = 0; i < R; i++) {
        cin >> str;
        for (int j = 0; j < C; j++) {
            ground[i][j] = str[j];
        }
    }
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            if (!visit[i][j] && ground[i][j] == '#') {
                BFS(i, j);
                cnt++;
            }
        }
    }
    cout << cnt;
}