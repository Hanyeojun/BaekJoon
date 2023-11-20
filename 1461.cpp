// 도서관
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;  // 책의 개수, 한 번에 들 수 있는 책의 개수
    int cnt = 0, sum = 0;
    cin >> n >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] < 0) cnt++;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < cnt; i += m) {
        sum += abs(v[i] * 2);
    }
    // 0을 기준으로 거리 계산해주어야 하므로 따로 처리해야됨
    for (int i = n - 1; i >= cnt; i -= m) {
        sum += v[i] * 2;
    }
    sum -= max(abs(v[0]), abs(v[n - 1]));

    cout << sum;
}