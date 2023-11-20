#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, b;
    cin >> n >> b;
    vector<int> v;
    while (n > 0) {
        v.push_back(n % b);
        n /= b;
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        if (v[i] < 10)
            cout << v[i];
        else
            cout << char(v[i] + 55);
    }
}