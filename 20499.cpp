#include <iostream>
using namespace std;
int main() {
    int k, d, a;
    char ch;
    cin >> k >> ch >> d >> ch >> a;
    if (k + a < d || d == 0)
        cout << "hasu";
    else
        cout << "gosu";
    return 0;
}