// 절댓값 힙
#include <cmath>
#include <iostream>
#include <queue>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> posit;  // 양수
    priority_queue<int> negat;                             // 음수
    int n, x;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) {
            if (posit.empty() && negat.empty()) {
                cout << 0 << '\n';
            } else {
                if (posit.empty() && !negat.empty()) {
                    cout << negat.top() << '\n';
                    negat.pop();
                } else if (negat.empty() && !posit.empty()) {
                    cout << posit.top() << '\n';
                    posit.pop();
                } else if (!posit.empty() && !negat.empty()) {
                    if (abs(posit.top()) < abs(negat.top())) {
                        cout << posit.top() << '\n';
                        posit.pop();
                    } else {
                        cout << negat.top() << '\n';
                        negat.pop();
                    }
                }
            }
        } else if (x > 0) {
            posit.push(x);
        } else {
            negat.push(x);
        }
    }
}