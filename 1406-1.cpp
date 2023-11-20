#include <iostream>
#include <list>
using namespace std;
// 연결 리스트 STL을 사용한 구현
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;
    list<char> lt;

    for (auto ch : str) lt.push_back(ch);
    auto cursor = lt.end();
    int m;
    cin >> m;
    while (m--) {
        char od;
        cin >> od;
        if (od == 'L') {  // 커서 왼쪽 한 칸 이동
            if (cursor != lt.begin()) {
                cursor--;
            }
        } else if (od == 'D') {  // 커서 오른쪽 한 칸 이동
            if (cursor != lt.end()) {
                cursor++;
            }
        } else if (od == 'B') {  // 커서 왼쪽 문자 삭제
            if (cursor != lt.begin()) {
                cursor--;
                cursor = lt.erase(cursor);
            }
        } else if (od == 'P') {  // 커서 왼쪽에 문자 추가
            char in;
            cin >> in;
            lt.insert(cursor, in);
        }
    }
    for (auto ch : lt) cout << ch;
}
