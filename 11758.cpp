#include <iostream>
#include <utility>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    pair<int, int> p1;
    pair<int, int> p2;
    pair<int, int> p3;
    cin >> p1.first >> p1.second;
    cin >> p2.first >> p2.second;
    cin >> p3.first >> p3.second;
    int m = (p2.first - p1.first) * (p3.second - p1.second) - (p3.first - p1.first) * (p2.second - p1.second);
    if (m > 0)
        cout << 1;
    else if (m < 0)
        cout << -1;
    else
        cout << 0;
}