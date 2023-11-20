#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        string str1, str2;
        cin >> str1 >> str2;
        string tmp1 = str1;
        string tmp2 = str2;
        sort(tmp1.begin(), tmp1.end());
        sort(tmp2.begin(), tmp2.end());
        if (tmp1 == tmp2) {
            cout << str1 << " & " << str2 << " are anagrams.\n";
        } else {
            cout << str1 << " & " << str2 << " are NOT anagrams.\n";
        }
    }
}