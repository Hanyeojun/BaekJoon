// Lucky 7
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    bool flag = false;
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '7') {
            flag = true;
            break;
        }
    }
    if (!flag && n % 7 != 0) {
        cout << 0;
    } else if (!flag && n % 7 == 0) {
        cout << 1;
    } else if (flag && n % 7 != 0) {
        cout << 2;
    } else if (flag && n % 7 == 0) {
        cout << 3;
    }
}