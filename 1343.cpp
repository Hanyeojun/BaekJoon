#include <iostream>
using namespace std;
int main(void) {
    string str, ans;
    int cnt = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'X')
            cnt++;
        else if (str[i] == '.') {
            ans += '.';
            if (cnt % 2 != 0)
                break;
            else
                cnt = 0;
        }
        if (cnt == 2 && str[i + 1] != 'X') {
            ans += "BB";
            cnt = 0;
        } else if (cnt == 4) {
            ans += "AAAA";
            cnt = 0;
        }
    }
    if (cnt % 2 == 1)
        cout << -1;
    else
        cout << ans;
}