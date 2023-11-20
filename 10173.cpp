#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        string str;
        int flag = 0;
        getline(cin, str);
        if (str == "EOI") break;
        for (int i = 0; i < str.length() - 3; i++) {
            if (str[i] == 'N' || str[i] == 'n') {
                if (str[i + 1] == 'E' || str[i + 1] == 'e') {
                    if (str[i + 2] == 'M' || str[i + 2] == 'm') {
                        if (str[i + 3] == 'O' || str[i + 3] == 'o') {
                            flag = 1;
                        }
                    }
                }
            } else {
                continue;
            }
        }
        if (flag)
            cout << "Found" << '\n';
        else
            cout << "Missing" << '\n';
    }
}