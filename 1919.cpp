#include <iostream>
using namespace std;
int main() {
    int cnt = 0;
    string s1, s2;
    cin >> s1 >> s2;

    int alp1[26] = {}, alp2[26] = {};
    for (int i = 0; i < s1.length(); i++) {
        alp1[s1[i] - 'a']++;
    }
    for (int i = 0; i < s2.length(); i++) {
        alp2[s2[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (alp1[i] != alp2[i]) {
            cnt += abs(alp1[i] - alp2[i]);
        }
    }
    cout << cnt;
}