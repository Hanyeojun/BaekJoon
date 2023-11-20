#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, t, park = 0, seoung = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(), v.end());

    int L = n / 2;
    for (int i = 0; i < L; i++) {
        seoung += v[i];
    }
    for (int i = L; i < n; i++) {
        park += v[i];
    }
    cout << seoung << ' ' << park;
}