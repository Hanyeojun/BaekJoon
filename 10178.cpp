#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int candy, bro;
        cin >> candy >> bro;
        cout << "You get " << candy / bro << " piece(s) and your dad gets " << candy % bro << " piece(s).";
        cout << '\n';
    }
}