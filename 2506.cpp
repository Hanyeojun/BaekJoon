#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n, cnt = 0, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        if (v[i]) {
            cnt++;
            sum += cnt;
        } else
            cnt = 0;
    }
    cout << sum;
}