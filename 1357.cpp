#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    string ans = to_string(stoi(str1) + stoi(str2));
    reverse(ans.begin(), ans.end());

    cout << stoi(ans);
}