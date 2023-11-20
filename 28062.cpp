#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end(), greater<int>());

    int sum = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 1) {
            if (tmp > 0) {
                sum += tmp + v[i];
                tmp = 0;
            }
            else
                tmp = v[i];
        } else
            sum += v[i];
    }
    cout << sum;
}