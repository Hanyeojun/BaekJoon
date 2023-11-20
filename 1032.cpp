#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;

    string res = str;

    for (int i = 1; i < n; i++) {
        string tmp;
        cin >> tmp;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] != tmp[j]) {
                res[j] = '?';
            }
        }
    }
    cout << res << '\n';
}