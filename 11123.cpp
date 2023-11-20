// 양 한마리... 양 두마리...
#include <cstring>
#include <iostream>
#include <queue>
using namespace std;

int H, W, cnt;
char grid[101][101];
bool visit[101][101];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void BFS(int a, int b) {
    queue<pair<int, int>> q;
    visit[a][b] = true;
    q.push({a, b});

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && nx < H && ny >= 0 && ny < W) {
                if (!visit[nx][ny]) {
                    if (grid[nx][ny] == '#') {
                        visit[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    string str;
    cin >> t;
    while (t--) {
        cin >> H >> W;
        cnt = 0;
        memset(grid, 0, sizeof(grid));
        memset(visit, false, sizeof(visit));

        for (int i = 0; i < H; i++) {
            cin >> str;
            for (int j = 0; j < W; j++) {
                grid[i][j] = str[j];
            }
        }

        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                if (!visit[i][j] && grid[i][j] == '#') {
                    BFS(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
}