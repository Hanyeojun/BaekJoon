#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        string str;
        cin >> a >> b;
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            int x = (a * ((int)str[i] - 65) + b) % 26;
            cout << (char)(x + 65);
        }
        cout << '\n';
    }
}