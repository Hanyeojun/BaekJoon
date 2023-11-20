#include <iostream>
#include <stack>
using namespace std;
stack<pair<int, int>> tower;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;                       // 탑의 수
    tower.push({100000001, 0});     // 최대 탑 개수 1억1, 0번째 탑
    for (int i = 1; i <= n; i++) {  // 1번째 탑부터 n번째 탑까지
        int p;
        cin >> p;                        // 탑의 높이 입력
        while (tower.top().first < p) {  // 입력받은 탑의 높이가 현재 탑의 높이보다 크다면
            tower.pop();                 // 현재 탑의 높이 제거
        }
        cout << tower.top().second << ' ';  // 현재 탑의 순번 출력
        tower.push({p, i});                 // 입력받은 탑의 높이와 순번 push
    }
}