#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str;
    while (n--) {
        cin >> str;
        int ans = ((str[0] - 65) * 26 * 26) + ((str[1] - 65) * 26) + ((str[2] - 65));
        int num = (str[4] - '0') * 1000 + (str[5] - '0') * 100 + (str[6] - '0') * 10 + str[7] - '0';
        if (abs(ans - num) <= 100) {
            cout << "nice" << '\n';
        } else
            cout << "not nice" << '\n';
    }
}