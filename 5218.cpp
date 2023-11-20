#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    string str1, str2;
    while (t--) {
        cin >> str1 >> str2;
        cout << "Distances: ";
        for (int i = 0; i < str1.length(); i++) {
            if (str2[i] >= str1[i]) {
                cout << str2[i] - str1[i] << ' ';
            } else
                cout << (str2[i] + 26) - str1[i] << ' ';
        }
        cout << '\n';
    }
}