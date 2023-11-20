// 영역 구하기
#include <algorithm>
#include <iostream>
#include <queue>
#include <utility>
#include <vector>
using namespace std;

int M, N, K;
int paper[101][101];
bool visit[101][101];
vector<int> area;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

void BFS(int a, int b) {
    int cnt = 1;
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
            if (nx >= 0 && nx < M && ny >= 0 && ny < N) {
                if (!visit[nx][ny]) {
                    if (paper[nx][ny] == 0) {
                        cnt++;
                        visit[nx][ny] = true;
                        q.push({nx, ny});
                    }
                }
            }
        }
    }
    area.push_back(cnt);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x1, y1, x2, y2;
    cin >> M >> N >> K;

    for (int t = 0; t < K; t++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++) {
            for (int j = x1; j < x2; j++) {
                paper[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (!visit[i][j] && paper[i][j] == 0) {
                BFS(i, j);
            }
        }
    }
    sort(area.begin(), area.end());
    cout << area.size() << '\n';
    for (int i = 0; i < area.size(); i++) {
        cout << area[i] << ' ';
    }
}