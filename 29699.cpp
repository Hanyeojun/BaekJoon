// Welcome to SMUPC!
#include <iostream>
using namespace std;
int main() {
    int n;
    string str = "WelcomeToSMUPC";
    cin >> n;

    cout << str[(n - 1) % 14];
}