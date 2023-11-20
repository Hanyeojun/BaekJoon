#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    char alp[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    cin >> n;
    cin.ignore();  // 숫자 입력 후 입력버퍼에 \n이 남게 되므로 버퍼 비우기
    while (n--) {
        string str, ans = "";
        getline(cin, str);
        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        int f;
        for (int i = 0; i < 26; i++) {
            f = str.find(alp[i]);
            if (f == -1) ans += alp[i];
        }
        if (ans.length() == 0)
            cout << "pangram" << '\n';
        else
            cout << "missing " << ans << '\n';
    }
}