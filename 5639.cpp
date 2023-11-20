// 이진 검색 트리
#include <iostream>
using namespace std;
// 전위 : 루트 - 좌 - 우
// 후위 : 좌 - 우 - 루트
int node[10001];
void Postorder(int start, int end) {
    if (start >= end) return;  // 시작점이 종료점보다 크거나 같으면 종료
    int root = node[start];    // root 노드 값
    int idx = start + 1;       // 좌, 우 노드가 나뉘는 인덱스 값

    while (idx < end) {
        if (root < node[idx]) break;  // root보다 큰 노드가 있다면(=왼쪽 서브트리가 끝남) 종료
        idx++;
    }
    Postorder(start + 1, idx);  // 루트 + 1 노드 인덱스부터 마지막 왼쪽 노드 인덱스
    Postorder(idx, end);        // 오른쪽 노드 처음부터 끝
    cout << root << '\n';
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, num = 0;
    while (cin >> n) {
        node[num++] = n;
    }
    Postorder(0, num);
}