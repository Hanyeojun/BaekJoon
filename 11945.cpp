#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, m;
    string str;
    vector<string> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> str;
        v.push_back(str);
    }
    for (int i = 0; i < n; i++) {
        reverse(v[i].begin(), v[i].end());
        cout << v[i] << '\n';
    }
}