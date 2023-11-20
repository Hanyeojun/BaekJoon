#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m, a;
    long long cnt[1001] = {0}, sum = 0, res = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;        // sum에 누적합 계산
        cnt[sum % m]++;  // 모듈러 연산값에 해당하는 인덱스 증가
    }
    // cnt[0] => 하나의 값 자체로 나머지가 0인 경우 누적
    res = cnt[0];
    for (int i = 0; i <= m; i++) {
        // res = nC2 조합 계산
        // 서로 다른 구간에서 m으로 나눴을 때 나머지가 같은 경우
        res += cnt[i] * (cnt[i] - 1) / 2;
    }
    cout << res;
}