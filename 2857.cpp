#include <iostream>
#include <string>
using namespace std;
int main() {
    int cnt = 0;
    string str;
    for (int i = 0; i < 5; i++) {
        cin >> str;
        for (int j = 0; j < str.length() - 2; j++) {
            if (str[j] == 'F' && str[j + 1] == 'B' && str[j + 2] == 'I') {
                cnt++;
                cout << i + 1 << ' ';
                break;
            }
        }
    }
    if (cnt == 0) {
        cout << "HE GOT AWAY!";
    }
}