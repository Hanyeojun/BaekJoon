// 조합
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int n, m;
bool visit[8];
vector<int> input;
void Cout() {
    for (int i = 0; i < n; i++) {
        if (visit[i]) {
            cout << input[i] << " ";
        }
    }
    cout << '\n';
}
void DFS(int start, int cnt) {
    if (cnt == m) {
        Cout();
        return;
    }
    for (int i = start; i < n; i++) {
        if (visit[i]) continue;
        visit[i] = true;
        DFS(i + 1, cnt + 1);
        visit[i] = false;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int start = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
        visit[i] = false;
    }
    sort(input.begin(), input.end());
    DFS(0, 0);
}