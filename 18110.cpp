#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int del = round((double)n * 0.15);
    int sum = 0;
    double avg;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    // for (int i = del; i < n-del;i++){
    //     cout << v[i] << " ";
    // }

    if (v.empty()) {
        cout << 0;
    } else {
        for (int i = del; i < n - del; i++) {
            sum += v[i];
        }
        avg = (double)sum / (n - del * 2);
        cout << round(avg);
    }
}