#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> sub;
    for (int i = 0; i < v.size() - 1; i++) {
        sub.push_back(v[i + 1] - v[i]);
    }

    sort(sub.begin(), sub.end());

    int cost = 0;
    for (int i = 0; i < n - k; i++) {
        cost += sub[i];
    }
    cout << cost;
}
// 비용은 (가장 큰 키 - 가장 작은 키)이므로 옆 사람과의 키 차이를 저장한 뒤 정렬.
// 옆 사람과의 차이값은 해당 경계를 선택했을 때 줄어드는 비용이다.