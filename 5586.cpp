#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int joi = 0, ioi = 0;
    cin >> str;
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') {
            joi++;
        } else if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
            ioi++;
        }
    }
    cout << joi << '\n' << ioi;
}