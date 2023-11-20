#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    string str;
    while (t--) {
        int alp[26] = {0};
        int num = 0, res = 0;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            num = str[i] - 65;
            alp[num]++;
        }
        for (int i = 0; i < 26; i++) {
            if (!alp[i]) {
                res += i + 65;
            }
        }
        cout << res << '\n';
    }
}