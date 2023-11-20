#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, t = "CAMBRIDGE";
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < t.size(); j++) {
            if (str[i] == t[j]) {
                str[i] = ' ';
            }
        }
    }
    for (int i = 0; i < str.size(); i++) {
        if (str[i] != ' ') {
            cout << str[i];
        }
    }
}