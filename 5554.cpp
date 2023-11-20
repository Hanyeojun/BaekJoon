#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    a += b + c + d;
    cout << a / 60 << '\n' << a % 60;
}