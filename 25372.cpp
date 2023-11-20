#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    while (t--)
    {
        cin >> str;
        if (str.length() >= 6 && str.length() <= 9)
        {
            cout << "yes" << '\n';
        }
        else
        {
            cout << "no" << '\n';
        }
    }
}