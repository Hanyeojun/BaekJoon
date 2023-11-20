#include <string.h>
// 문서 검색
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str, word;
    getline(cin, str);
    getline(cin, word);

    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < str.length(); i++) {
        for (int j = 0; j < word.length(); j++) {
            if (str[i + j] != word[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cnt++;
            i += word.length() - 1;
        } else {
            flag = true;
        }
    }
    cout << cnt;
}