#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    int num, sum = 0;
    cin >> str >> num;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            sum = sum * num + str[i] - '0';
        } else {
            sum = sum * num + (str[i] - 'A' + 10);
        }
    }
    cout << sum;
}