#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    if (n % 2 == 0) {
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] != str2[i]) {
                cout << "Deletion failed" << '\n';
                return 0;
            }
        }
        cout << "Deletion succeeded" << '\n';
    } else {
        for (int i = 0; i < str1.size(); i++) {
            if (str1[i] == str2[i]) {
                cout << "Deletion failed" << '\n';
                return 0;
            }
        }
        cout << "Deletion succeeded" << '\n';
    }
}