#include <iostream>
using namespace std;
int main() {
    int s, l;
    cin >> s >> l;
    int ans = s - l;
    if (ans >= 0)
        cout << "Congratulations, you are within the speed limit!";
    else {
        cout << "You are speeding and your fine is $";
        if (1 <= -ans && -ans <= 20)
            cout << 100;
        else if (21 <= -ans && -ans <= 30)
            cout << 270;
        else if (-ans >= 31)
            cout << 500;
        cout << '.';
    }
}