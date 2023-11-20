// AC
#include <deque>
#include <iostream>
#include <string>
using namespace std;
// R = 배열의 순서 뒤집기
// D = 첫 번째 수 삭제
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    while (T--) {
        deque<int> dq;    // 문제상의 배열
        string p;         // 실행할 함수
        int n;            // 배열 크기
        string pval;      // 배열 값
        bool flag = 0;    // 0이면 front, 1이면 back
        bool res = true;  // false면 실패, true면 성공
        cin >> p >> n >> pval;

        if (n != 0) {
            string tmp = "";
            for (int i = 0; i < pval.length(); i++) {
                if (pval[i] == '[')
                    continue;
                else if (pval[i] >= '0' && pval[i] <= '9') {
                    tmp += pval[i];
                } else if (pval[i] == ',' || pval[i] == ']') {
                    if (!tmp.empty()) {
                        dq.push_back(stoi(tmp));
                        tmp.clear();
                    }
                }
            }
        }

        // 함수 실행
        for (int i = 0; i < p.length(); i++) {
            if (p[i] == 'R') {
                flag = !flag;
            } else if (p[i] == 'D') {
                if (dq.empty()) {
                    res = false;
                    break;
                }
                if (!flag) {  // 0이면 앞에서부터 삭제
                    dq.pop_front();
                } else {  // 1이면 뒤에서부터 삭제
                    dq.pop_back();
                }
            }
        }

        if (!res) {  // 실패일 때
            cout << "error" << '\n';
        } else {  // 성공일 때
            cout << '[';
            if (!flag) {  // 0이면 앞에서부터 출력
                while (!dq.empty()) {
                    cout << dq.front();
                    dq.pop_front();
                    if (!dq.empty()) cout << ',';
                }

            } else {  // 1이면 뒤에서부터 출력
                while (!dq.empty()) {
                    cout << dq.back();
                    dq.pop_back();
                    if (!dq.empty()) cout << ',';
                }
            }
            cout << ']' << '\n';
        }
    }
}
// 반례
/*

입력 :
1
RR
0
[]

출력 :
[]

*/