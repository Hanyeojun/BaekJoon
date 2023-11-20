#include <iostream>
using namespace std;

void Heart() {
    cout << " @@@   @@@ \n";
    cout << "@   @ @   @\n";
    cout << "@    @    @\n";
    cout << "@         @\n";
    cout << " @       @ \n";
    cout << "  @     @  \n";
    cout << "   @   @   \n";
    cout << "    @ @    \n";
    cout << "     @     \n";
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        Heart();
    }
}