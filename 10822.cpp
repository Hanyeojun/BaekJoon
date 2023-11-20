#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, tmp = "";
    int sum = 0, num = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ',') {
            sum += stoi(tmp);
            tmp = "";
        } else
            tmp += str[i];
    }
    cout << sum + stoi(tmp) << '\n';
}