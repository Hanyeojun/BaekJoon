#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 65 && str[i] <= 67) {
            cout << (char)(str[i] + 23);
        } else {
            cout << (char)(str[i] - 3);
        }
    }
}