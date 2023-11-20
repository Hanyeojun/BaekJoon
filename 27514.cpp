// 1차원 2048
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<long long> v;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    bool flag = true;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long t;
        cin >> t;
        if (t != 0) {
            v.push_back(t);
        }
    }

    if (n == 1) {
        cout << v[0];
        return 0;
    } else if (v.size() == 1) {
        cout << v[0];
        return 0;
    } else {
        sort(v.begin(), v.end(), greater<>());
        while (1) {
            flag = true;
            for (int i = 0; i < v.size(); i++) {
                if (v[i] == v[i + 1]) {
                    v[i] *= 2;
                    v[i + 1] = 0;
                    flag = false;
                }
            }
            sort(v.begin(), v.end(), greater<>());

            while (!v.back()) {
                v.pop_back();
            }

            if (v.size() == 1 || flag) {
                break;
            }
        }
    }
    cout << v[0];
}