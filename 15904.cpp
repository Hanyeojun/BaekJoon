#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, ans = "";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'U' && ans == "") {
            ans += 'U';
        } else if (str[i] == 'C' && ans == "U") {
            ans += 'C';
        } else if (str[i] == 'P' && ans == "UC") {
            ans += 'P';
        } else if (str[i] == 'C' && ans == "UCP") {
            ans += 'C';
        }
    }
    if (ans == "UCPC")
        cout << "I love UCPC";
    else
        cout << "I hate UCPC";
}