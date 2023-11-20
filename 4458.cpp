#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    string str;
    cin.ignore();  // 입력 버퍼 지움

    while (t--) {
        getline(cin, str);
        str[0] = toupper(str[0]);
        cout << str << '\n';
    }
}