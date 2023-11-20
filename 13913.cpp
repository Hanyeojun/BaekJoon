// 숨바꼭질 4
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

bool visit[100001];
vector<int> v;
int save[100001];

int BFS(int n, int k) {
    queue<pair<int, int>> q;
    q.push({n, 0});
    visit[n] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int t = q.front().second;
        q.pop();

        if (x == k) {     // 현재 위치와 동생 위치가 같을 때
            int idx = x;  // save 배열에 이동 역순으로 저장되어 있으므로 초기 위치 전까지 반복
            while (idx != n) {
                v.push_back(idx);  // v에 저장
                idx = save[idx];   // 인덱스값 이전 위치로 이동
            }
            v.push_back(n);  // 초기 위치 도착하면 초기 위치 저장
            return t;        // 걸린 시간 return
        }
        if (x * 2 <= 100000 && !visit[x * 2]) {
            q.push({x * 2, t + 1});
            visit[x * 2] = true;
            save[x * 2] = x;
        }
        if (x + 1 <= 100000 && !visit[x + 1]) {  // 범위 내이면서 방문 x이면
            q.push({x + 1, t + 1});              // 이동 & 이동 횟수 + 1
            visit[x + 1] = true;                 // 방문 처리
            save[x + 1] = x;                     // 이전 위치 저장
        }
        if (x - 1 >= 0 && !visit[x - 1]) {
            q.push({x - 1, t + 1});
            visit[x - 1] = true;
            save[x - 1] = x;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    cin >> N >> K;
    cout << BFS(N, K) << '\n';

    for (int i = v.size() - 1; i >= 0; i--) {
        cout << v[i] << ' ';
    }
}