#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a = 0, b = 0;
    a = n / 5;
    b = n % 5;
    for (int i = 0; i < a; i++) {
        cout << "V";
    }
    for (int j = 0; j < b; j++) {
        cout << "I";
    }
}