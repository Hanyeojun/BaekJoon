#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int m, num;
    int arr[21] = {0};
    string str;

    cin >> m;
    while (m--) {
        cin >> str;
        if (str == "add") {
            cin >> num;           // 번호 입력
            if (arr[num] == 0) {  // 없으면
                arr[num] = 1;     // 표시
            }
        } else if (str == "remove") {
            cin >> num;           // 제거할 번호 입력
            if (arr[num] == 1) {  // 있으면
                arr[num] = 0;     // 제거
            }
        } else if (str == "check") {
            cin >> num;
            if (arr[num] == 1) {    // 있으면
                cout << 1 << '\n';  // 1 출력
            } else                  // 없으면
                cout << 0 << '\n';  // 0 출력
        } else if (str == "toggle") {
            cin >> num;
            if (arr[num] == 1) {  // 1이면
                arr[num] = 0;     // 0으로
            } else                // 0이면
                arr[num] = 1;     // 1로
        } else if (str == "all") {
            for (int i = 1; i < 21; i++) {
                arr[i] = 1;
            }
        } else if (str == "empty") {
            for (int i = 1; i < 21; i++) {
                arr[i] = 0;
            }
        }
    }
}