// 222-풀링. 분할정복
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int arr[1024][1024] = {-10001};
int DnC(int y, int x, int sz) {
    vector<int> v;
    if (sz == 1) {
        v.push_back(arr[y][x]);
        v.push_back(arr[y][x + 1]);
        v.push_back(arr[y + 1][x]);
        v.push_back(arr[y + 1][x + 1]);
        sort(v.begin(), v.end(), greater<int>());
        return v[1];
    } else {
        v.push_back(DnC(y, x, sz / 2));
        v.push_back(DnC(y, x + sz, sz / 2));
        v.push_back(DnC(y + sz, x, sz / 2));
        v.push_back(DnC(y + sz, x + sz, sz / 2));
        sort(v.begin(), v.end(), greater<int>());
        return v[1];
    }
}
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << DnC(0, 0, n / 2);
}