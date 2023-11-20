// 배
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;  // 크레인 수, 박스 수

    cin >> n;
    vector<int> crane(n);  // 각 크레인별 최대 무게값
    for (int i = 0; i < n; i++) {
        cin >> crane[i];
    }

    cin >> m;
    vector<int> box(m);  // 각 박스 무게
    for (int i = 0; i < m; i++) {
        cin >> box[i];
    }

    sort(crane.begin(), crane.end(), greater<int>());  // 내림차순
    sort(box.begin(), box.end(), greater<int>());

    if (crane[0] < box[0]) {  // 크레인 최대 무게 제한보다 무거운 박스가 있으면
        cout << -1;
        return 0;
    }
    int cnt = 0;
    while (!box.empty()) {  // 모든 박스를 다 옮길 때까지 반복
        cnt++;
        for (int i = 0; i < crane.size(); i++) {
            for (int j = 0; j < box.size(); j++) {
                if (crane[i] >= box[j]) {
                    box.erase(box.begin() + j);
                    break;
                }
            }
        }
    }
    cout << cnt;
}