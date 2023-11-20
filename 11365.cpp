#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    while (1) {
        string str;
        getline(cin, str);
        if (str == "END") break;
        reverse(str.begin(), str.end());
        cout << str << '\n';
    }
}