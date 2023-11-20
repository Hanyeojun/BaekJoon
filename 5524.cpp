#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int n;
    cin >> n;
    while (n--) {
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            if (isupper(str[i])) str[i] = tolower(str[i]);
        }
        cout << str << '\n';
    }
}