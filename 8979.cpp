// 올림픽
#include <algorithm>
#include <iostream>
using namespace std;

int n, k;
pair<pair<int, int>, pair<int, int>> country[1001];

bool Cmp(pair<pair<int, int>, pair<int, int>> A, pair<pair<int, int>, pair<int, int>> B) {
    if (A.first.second > B.first.second) {
        return true;
    } else if (A.first.second == B.first.second) {
        if (A.second.first > B.second.first) {
            return true;
        } else if (A.second.first == B.second.first) {
            if (A.second.second > B.second.second) {
                return true;
            } else if (A.second.second == B.second.second) {
                return A.first.first == k;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        return false;
    }
    return false;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> country[i].first.first >> country[i].first.second >> country[i].second.first >> country[i].second.second;
    }
    sort(country, country + n, Cmp);
    for (int i = 0; i < n; i++) {
        if (country[i].first.first == k) {
            cout << i + 1;
            break;
        }
    }
}