#include <iostream>
using namespace std;

int GCD(int n, int m)
{
    int z = n % m;
    while (z != 0)
    {
        n = m;
        m = z;
        z = n % m;
    }
    return m;
}

int main()
{
    int a, b, x, y, r1, r2, gcd;
    cin >> a >> b >> x >> y;
    r1 = b * x + a * y;
    r2 = b * y;
    gcd = GCD(r1, r2);
    r1 /= gcd;
    r2 /= gcd;
    cout << r1 << " " << r2;
}