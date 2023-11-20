#include <iostream>
using namespace std;
int main()
{
    int r, s, sum = 0;
    cin >> r >> s;
    sum = r * 8 + s * 3;
    if (sum > 28)
    {
        cout << sum - 28;
    }
    else
    {
        cout << 0;
    }
}