// 잃어버린 괄호
#include <iostream>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string mathEx, num;
    int sum = 0;
    bool flag = false;
    cin >> mathEx;

    for (int i = 0; i <= mathEx.length(); i++) {
        if (mathEx[i] == '+' || mathEx[i] == '-' || i == mathEx.length()) {
            if (flag) {  //-가 있었을 때
                sum -= stoi(num);
                num = "";
            } else {  //-가 없었을 때
                sum += stoi(num);
                num = "";
            }
        } else {  // 숫자일 때
            num += mathEx[i];
        }
        if (mathEx[i] == '-') flag = true;
    }
    cout << sum;
}