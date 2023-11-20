#include <iostream>
using namespace std;
int main() {
    int s, k, h;
    cin >> s >> k >> h;
    int sum = s + k + h;
    if (sum >= 100)
        cout << "OK";
    else if (sum < 100 && s < k && s < h)
        cout << "Soongsil";
    else if (sum < 100 && k < s && k < h)
        cout << "Korea";
    else if (sum < 100 && h < s && h < k)
        cout << "Hanyang";
}