#include <iostream>
using namespace std;
int main() {
    for (int i = 1;; i++) {
        int a, b;
        string str;
        cin >> a >> str >> b;
        if (str == "E") break;
        if (str == ">") {
            cout << "Case " << i << ": " << boolalpha << (a > b) << '\n';
        } else if (str == ">=") {
            cout << "Case " << i << ": " << boolalpha << (a >= b) << '\n';
        } else if (str == "<") {
            cout << "Case " << i << ": " << boolalpha << (a < b) << '\n';
        } else if (str == "<=") {
            cout << "Case " << i << ": " << boolalpha << (a <= b) << '\n';
        } else if (str == "==") {
            cout << "Case " << i << ": " << boolalpha << (a == b) << '\n';
        } else if (str == "!=") {
            cout << "Case " << i << ": " << boolalpha << (a != b) << '\n';
        }
    }
}