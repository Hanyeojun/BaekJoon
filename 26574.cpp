#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    vector<int> v;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        v.push_back(n);
    }
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << ' ' << v[i] << '\n';
    }
}