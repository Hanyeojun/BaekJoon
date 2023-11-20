// 강의실
#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    priority_queue<int, vector<int>, greater<int>> pq;  // 오름차순
    // 가장 빨리 끝나는 강의 시간과 비교하여 강의실 사용 여부 판단
    vector<pair<int, int>> v;
    int n, room, s, e, cnt = 1;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> room >> s >> e;
        v.push_back({s, e});
    }
    sort(v.begin(), v.end());  // 빨리 시작하는 순 & 빨리 끝나는 순서로 정렬됨
    int startT, endT;
    for (int i = 0; i < n; i++) {
        startT = v[i].first;
        endT = v[i].second;

        if (pq.empty()) {
            pq.push(endT);  // 끝나는 시간 저장
        } else {
            if (pq.top() > startT) {  // 강의 안 끝남
                cnt++;                // 강의실 증가
            } else {                  // 강의 끝남
                pq.pop();             // 끝난 강의 삭제
            }
            pq.push(endT);  // 새로운 강의 시간 저장
        }
    }
    cout << cnt;
}