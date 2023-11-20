// 짐 챙기는 숌
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m, box = 0, w = 0;
    cin >> n >> m;

    if (n == 0) {
        cout << 0;
        return 0;
    }
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) {
        if (w + v[i] > m) {
            w = v[i];
            box++;
        } else {
            w += v[i];
        }
    }
    if (w > 0) {
        box++;
    }
    cout << box;
}