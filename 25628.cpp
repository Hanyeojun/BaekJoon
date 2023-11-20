#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int bd = a / 2;
    cout << min(bd, b);
}