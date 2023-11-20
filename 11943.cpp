#include <iostream>
using namespace std;
int main() {
    int a[2], b[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1];
    if (a[0] + b[1] <= a[1] + b[0])
        cout << a[0] + b[1];
    else
        cout << a[1] + b[0];
}