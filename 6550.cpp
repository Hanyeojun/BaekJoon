// 부분 문자열
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    string s, t;
    while (cin >> s >> t) {
        int idx = 0;
        bool flag = false;
        for (int i = 0; i < t.length(); i++) {
            if (s[idx] == t[i]) idx++;
            if (idx == s.length()) {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
}