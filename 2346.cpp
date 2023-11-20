// // 풍선 터뜨리기
#include <deque>
#include <iostream>
using namespace std;
int main(void) {
    deque<pair<int, int>> dq;
    int n, t;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        dq.push_back({t, i + 1});
    }
    while (!dq.empty()) {
        int num = dq.front().first;
        cout << dq.front().second << ' ';
        dq.pop_front();

        if (num > 0) {
            for (int i = 0; i < num - 1; i++) {
                dq.push_back(dq.front());
                dq.pop_front();
            }
        } else {
            for (int i = 0; i < abs(num); i++) {
                dq.push_front(dq.back());
                dq.pop_back();
            }
        }
    }
}