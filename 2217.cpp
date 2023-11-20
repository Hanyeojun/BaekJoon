// 로프
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, w = -1;  // 로프 개수, 중량
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), greater<>());  // 내림차순 정렬 : 중량 큰 로프순 정렬

    for (int i = 0; i < n; i++) {
        w = max(w, (i + 1) * v[i]);  // 로프 개수 증가시키면서 값이 가장 큰 중량 탐색
    }
    cout << w;
}