#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    stack<char> tack;
    string str, ans;
    getline(cin, str);
    str += ' ';
    int i = 0;
    while (i <= str.length()) {
        if (str[i] == '<') {
            if (!tack.empty()) {
                while (!tack.empty()) {
                    ans += tack.top();
                    tack.pop();
                }
                ans += '<';
                i++;
            }
            while (str[i] != '>') {
                ans += str[i++];
            }
            ans += str[i++];
        } else {
            tack.push(str[i]);
            if (str[i] == ' ') {
                tack.pop();
                while (!tack.empty()) {
                    ans += tack.top();
                    tack.pop();
                }
                ans += ' ';
            }
            i++;
        }
    }
    for (int j = 0; j < str.length(); j++) {
        cout << ans[j];
    }
}