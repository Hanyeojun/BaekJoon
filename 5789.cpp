#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    string str;
    while (t--) {
        bool flag = false;
        cin >> str;
        int len = str.length() - 1;
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] == str[len]) {
                flag = true;
                len--;
            } else {
                flag = false;
                len--;
            }
        }
        if (flag)
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }
}