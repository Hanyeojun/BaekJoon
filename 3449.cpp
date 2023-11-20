#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    string str1, str2;
    cin >> t;
    while (t--) {
        int cnt = 0;
        cin >> str1 >> str2;

        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                cnt++;
            }
        }
        cout << "Hamming distance is " << cnt << '.' << '\n';
    }
}