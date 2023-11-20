#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cin >> str;
    double sum = 0.0, cnt = 0.0;
    for (int i = 0; i < str.length(); i++) {
        switch (str[i]) {
            case 'A':
                cnt++;
                sum += 4.0;
                break;
            case 'B':
                cnt++;
                sum += 3.0;
                break;
            case 'C':
                cnt++;
                sum += 2.0;
                break;
            case 'D':
                cnt++;
                sum += 1.0;
                break;
            case 'F':
                cnt++;
                break;
            case '+':
                sum += 0.5;
                break;
            default:
                break;
        }
    }
    cout << sum / cnt;
}