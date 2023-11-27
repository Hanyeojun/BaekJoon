#include <iostream>
using namespace std;
int main() {
    int a, cnt = 0;
    for (int i = 0; i < 3; i++) {
        cin >> a;
        if (a == 1) cnt++;
    }
    if (cnt > 1)
        cout << 1;
    else
        cout << 2;
}