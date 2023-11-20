#include <iostream>
#include <string>
using namespace std;
int main() {
    int t, a, b;
    string str;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> str;
        if (str == "P=NP") {
            cout << "skipped" << '\n';
        } else {
            int idx = str.find('+');
            a = stoi(str.substr(0, idx));
            b = stoi(str.substr(idx + 1));
            cout << a + b << '\n';
        }
    }
    return 0;
}