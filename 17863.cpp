#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    if (str.substr(0, 3) == "555")
        cout << "YES";
    else
        cout << "NO";
}