#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    bool flag;
    string str1, str2;
    int a[26], d[26];
    cin >> t;
    while (t--) {
        flag = true;
        for (int i = 0; i < 26; i++) {
            a[i] = 0;
            d[i] = 0;
        }

        cin >> str1 >> str2;

        if (str1.length() != str2.length()) {
            flag = false;
        } else {
            for (int i = 0; i < str1.length(); i++) {
                a[str1[i] - 'a']++;
                d[str2[i] - 'a']++;
            }

            for (int i = 0; i < 26; i++) {
                if (a[i] != d[i]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            std::cout << "Possible" << '\n';
        } else {
            std::cout << "Impossible" << '\n';
        }
    }
}