#include <iostream>
using namespace std;
int main() {
    int cnt = 0;
    char ch;
    for (int i = 0; i < 6; i++) {
        cin >> ch;
        if (ch == 'W') cnt++;
    }
    if (cnt >= 5)
        cout << 1;
    else if (cnt == 3 || cnt == 4)
        cout << 2;
    else if (cnt == 1 || cnt == 2)
        cout << 3;
    else
        cout << -1;
}