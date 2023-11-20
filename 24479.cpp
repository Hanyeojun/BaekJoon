#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<int> mapp[200000];
int visit[200000];
int res[200000];
int cnt = 0;

void dfs(int r) {
    if (visit[r] == 1) {
        return;
    }
    visit[r] = 1;
    cnt++;
    res[r] = cnt;
    for (int i = 0; i < mapp[r].size(); i++) {
        dfs(mapp[r][i]);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, r;
    cin >> n >> m >> r;
    for (int i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        mapp[x].push_back(y);
        mapp[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) {
        sort(mapp[i].begin(), mapp[i].end());
    }
    dfs(r);
    for (int i = 1; i <= n; i++) {
        cout << res[i] << '\n';
    }
}