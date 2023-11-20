#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long k, n, maxx = 0, res = 0;  // 가지고 있는 랜선 개수, 필요한 랜선 개수, 최대 길이, 결과값
    cin >> k >> n;
    vector<long long> v;  // 가지고 있는 랜선 길이 저장
    for (int i = 0; i < k; i++) {
        int t;
        cin >> t;
        v.push_back(t);
        maxx = max(maxx, v[i]);
    }
    long long start = 1, end = maxx, mid;  // 시작점, 끝점, 중점
    while (start <= end) {
        mid = (start + end) / 2;
        long long now = 0;  // 현재
        for (int i = 0; i < k; i++) {
            now += v[i] / mid;
        }
        if (now >= n) {           // mid로 나눈 값이 n보다 크거나 같으면
            start = mid + 1;      // start를 이동 후
            res = max(res, mid);  // 길이가 더 긴 경우를 확인
        } else {                  // mid로 나눈 값이 작으면
            end = mid - 1;        // end를 이동
        }
    }
    cout << res;
}