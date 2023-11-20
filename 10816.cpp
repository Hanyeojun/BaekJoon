#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n, m, res;
vector<int>v;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int a, b;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end()); //이분탐색을 위한 정렬

    vector<pair<int, int>> sum; //first = 가지고 있는 숫자 카드, second = 가지고 있는 숫자 카드의 개수
    sum.push_back({ v[0],1 });
    for (int i = 1; i < n; i++) {
        if (v[i] == sum.back().first) sum.back().second++; //sum의 마지막 요소의 first와 v의 요소가 같다면 second++(숫자 카드의 개수 판단)
        else sum.push_back({ v[i], 1 });
    }
    cin >> m;
    for (int i = 0; i < m; i++) { //이분탐색
        cin >> b;
        res = 0;
        int left = 0, right = sum.size() - 1;
        while (left <= right) {
            int mid = (left + right) / 2;
            if (sum[mid].first > b) right = mid - 1;
            else if (sum[mid].first < b) left = mid + 1;
            else {
                res = sum[mid].second;
                break;
            }
        }
        cout << res << ' ';
    }
}