#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    string str;
    for (int i = 0; i < n; i++) {
        str += to_string(n);
    }
    if (str.length() > m) {
        for (int i = 0; i < m; i++) {
            cout << str[i];
        }
    } else {
        cout << str;
    }
}