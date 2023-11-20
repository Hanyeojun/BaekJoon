// 경쟁적 전염
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int N, K, S, X, Y;
int tube[201][201];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
queue<pair<pair<int, int>, pair<int, int>>> q;   // 바이러스 번호, 시간, 위치 x, 위치 y
vector<pair<pair<int, int>, pair<int, int>>> v;  // 바이러스 번호, 시간, 위치 x, 위치 y

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> tube[i][j];
            if (tube[i][j] != 0) {
                v.push_back({{tube[i][j], 0}, {i, j}});
            }
        }
    }
    cin >> S >> X >> Y;

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        q.push({{v[i].first.first, v[i].first.second}, {v[i].second.first, v[i].second.second}});
    }

    while (!q.empty()) {
        int virus = q.front().first.first;
        int T = q.front().first.second;
        int x = q.front().second.first;
        int y = q.front().second.second;
        q.pop();
        if (T == S) {
            break;
        }
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
                if (tube[nx][ny] == 0) {
                    tube[nx][ny] = virus;
                    q.push({{virus, T + 1}, {nx, ny}});
                }
            }
        }
    }
    cout << tube[X - 1][Y - 1];
}