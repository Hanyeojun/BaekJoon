#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        sum += v[i];
    }
    cout << sum;
}