#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string str;
    while (1) {
        int alp[26] = {0};
        getline(cin, str);
        if (str == "*") return 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ')
                continue;
            else
                alp[str[i] - 'a']++;
        }
        bool flag = false;
        for (int i = 0; i < 26; i++) {
            if (alp[i] == 0) {
                flag = false;
                break;
            } else {
                flag = true;
            }
        }
        if (flag)
            cout << "Y\n";
        else
            cout << "N\n";
    }
}