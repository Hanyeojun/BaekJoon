#include <iostream>
using namespace std;
int main() {
    int n, A = 0, B = 0;
    for (int i = 3; i > 0; i--) {
        cin >> n;
        A += (n * i);
    }
    for (int i = 3; i > 0; i--) {
        cin >> n;
        B += (n * i);
    }
    if (A > B)
        cout << 'A';
    else if (B > A)
        cout << 'B';
    else
        cout << 'T';
}