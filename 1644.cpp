#include "iostream"
#include <cmath>
#include "vector"
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<bool>flag(n + 1, 0);
    vector<int>v;
    int sqt = sqrt(n);
    if (n == 1) {
        cout << 0;
        return 0;
    }
    flag[0] = 1;
    flag[1] = 1;
    for (int i = 2; i <= sqt; i++) { //n이하 소수 계산
        if (flag[i] == 0) {
            for (int j = i * 2; j <= n; j += i) {
                flag[j] = 1;
            }
        }
    }
    for (int i = 0; i <= n; i++) { //소수 벡터에 저장
        if (flag[i] == 0) v.push_back(i);
    }
    int s = 0, e = 0, sum = v[0], cnt = 0;
    while (s <= e && e < v.size()) {
        if (sum < n) {
            sum += v[++e];
        }
        else if (sum > n) {
            sum -= v[s++];
        }
        else { //sum==n
            cnt++;
            sum -= v[s++];
        }
    }
    cout << cnt;
}