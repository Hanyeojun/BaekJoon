// 정수 a를 k로 만들기
#include <iostream>
#include <queue>
using namespace std;
queue<pair<int, int>> q;
bool visit[1000001];

int BFS(int a, int k) {
    q.push({a, 0});
    visit[a] = true;
    while (!q.empty()) {
        int value = q.front().first;
        int cnt = q.front().second;
        q.pop();
        if (value == k) {
            return cnt;
        }
        if (value * 2 <= k) {
            visit[value * 2] = true;
            q.push({value * 2, cnt + 1});
        }
        if (!visit[value + 1]) {
            q.push({value + 1, cnt + 1});
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int A, K;
    cin >> A >> K;
    cout << BFS(A, K);
}