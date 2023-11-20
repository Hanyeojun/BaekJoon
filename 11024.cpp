#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string str;
        int sum = 0;
        getline(cin, str);
        string num = "";
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == ' ') {
                sum += stoi(num);
                num = "";
            } else {
                num += str[i];
            }
        }
        if (num != "") sum += stoi(num);
        cout << sum << '\n';
    }
}