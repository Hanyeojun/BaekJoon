#include <string.h>

#include <iostream>
using namespace std;
int cnt;
int recursion(const char *s, int l, int r) {
    cnt++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s) {
    cout << recursion(s, 0, strlen(s) - 1) << " ";
    int res = cnt;
    return res;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        char str[1001];
        cin >> str;
        cout << isPalindrome(str) << '\n';
        cnt = 0;
    }
}