#include <deque>
#include <iostream>
using namespace std;
int main() {
    int n, tmp = 1, cnt = 0;
    cin >> n;

    deque<int> dq;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        dq.push_back(t);
    }
    while (!dq.empty()) {
        int x = dq[0];
        dq.pop_front();
        if (x == tmp) {
            tmp++;
        } else {
            cnt++;
        }
    }
    cout << cnt;
}