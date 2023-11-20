#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a, b;
    vector<int> v;
    for (int i = 0; i < 20; i++) {
        v.push_back(i + 1);
    }

    for (int i = 0; i < 10; i++) {
        cin >> a >> b;
        reverse(v.begin() + a - 1, v.begin() + b);
    }
    
    for (int i = 0; i < 20; i++) {
        cout << v[i] << ' ';
    }
}