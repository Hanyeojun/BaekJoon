// 덱 2
#include <deque>
#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    deque<int> dq;
    int n, x, num = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) {
            cin >> num;
            dq.push_front(num);
        } else if (x == 2) {
            cin >> num;
            dq.push_back(num);
        } else if (x == 3) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (x == 4) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (x == 5) {
            cout << dq.size() << '\n';
        } else if (x == 6) {
            if (dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (x == 7) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
        } else if (x == 8) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
            }
        }
    }
}