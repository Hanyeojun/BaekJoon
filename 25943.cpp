// 양팔저울
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int w[] = {100, 50, 20, 10, 5, 2, 1};
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int left = v[0], right = v[1];
    for (int i = 2; i < n; i++) {
        if (left == right) {
            left += v[i];
        } else if (left < right) {
            left += v[i];
        } else if (right < left) {
            right += v[i];
        }
    }
    int sub = abs(left - right);

    if (sub == 0)
        cout << 0;
    else {
        int cnt = 0;
        for (int i = 0; i < 7; i++) {
            if (sub / w[i] != 0) {
                cnt += sub / w[i];
                sub = sub % w[i];
            }
        }
        cout << cnt;
    }
}