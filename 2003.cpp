#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, s = 0, e = 0, sum = 0, res = 0;
    vector<int> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    while (e <= n) {
        if (sum < m) {  // 합이 m보다 작으면 v[e] 더하고 e 증가
            sum += v[e++];
        } else if (sum > m) {  // 합이 m보다 크면 v[s] 빼고 s 증가
            sum -= v[s++];
        } else {  // 합이 m과 같으면 res+1 & v[s] 빼고 s 증가
            res++;
            sum -= v[s++];
        }
    }
    cout << res;
}