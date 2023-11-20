// N과 M(5)
//  순열
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int n, m;
bool visit[8];
vector<int> input, res;
void Cout() {
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << '\n';
}
void DFS(int cnt) {
    if (cnt == m) {
        Cout();
        return;
    }
    for (int i = 0; i < n; i++) {
        if (visit[i]) continue;
        visit[i] = true;
        res.push_back(input[i]);
        DFS(cnt + 1);
        res.pop_back();
        visit[i] = false;
    }
}
int main() {
    int cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        input.push_back(tmp);
        visit[i] = false;
    }
    sort(input.begin(), input.end());
    DFS(0);
}