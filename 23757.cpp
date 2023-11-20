// 아이들과 선물 상자
#include <iostream>
#include <queue>
using namespace std;
int main() {
    bool flag = true;
    int n, m, c, w;
    cin >> n >> m;

    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        cin >> c;
        pq.push(c);
    }
    for (int i = 0; i < m; i++) {
        cin >> w;
        if (pq.top() >= w) {
            pq.push(pq.top() - w);
            pq.pop();
        } else {
            flag = false;
        }
    }
    if (flag)
        cout << 1;
    else
        cout << 0;
}