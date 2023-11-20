#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 60 && a == b && b == c) {
        cout << "Equilateral";
    } else if (a + b + c == 180 && (a == b || b == c || c == a)) {
        cout << "Isosceles";
    } else if (a + b + c == 180) {
        cout << "Scalene";
    } else
        cout << "Error";
}