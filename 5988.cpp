#include <iostream>
using namespace std;
int main() {
    int N, t;
    string str;
    cin >> N;

    while (N--) {
        cin >> str;
        t = (str[str.length() - 1]) - '0';
        if (t % 2 == 0) {
            cout << "even\n";
        } else {
            cout << "odd\n";
        }
    }
}