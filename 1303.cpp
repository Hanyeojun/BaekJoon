// 전쟁 - 전투
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int N, M, white, blue;
char soldier[101][101];
bool visit[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<int, int>> q;

void BFS(int a, int b, char h) {
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
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                if (!visit[nx][ny] && soldier[nx][ny] == h) {
                    visit[nx][ny] = true;
                    q.push({nx, ny});
                    cnt++;
                }
            }
        }
    }
    if (h == 'W')
        white += cnt * cnt;
    else if (h == 'B')
        blue += cnt * cnt;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> str;
        for (int j = 0; j < N; j++) {
            soldier[i][j] = str[j];
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!visit[i][j]) {
                BFS(i, j, soldier[i][j]);
            }
        }
    }
    cout << white << ' ' << blue;
}