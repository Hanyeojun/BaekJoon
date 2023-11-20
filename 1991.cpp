// 트리 순회
#include <iostream>
#include <utility>
using namespace std;
pair<char, char> node[26];

// 전위 순회 : 루트 노드 - 왼쪽 자식 - 오른쪽 자식
void preorder(char cur) {
    if (cur == '.') return;
    cout << cur;                       // root
    preorder(node[cur - 'A'].first);   // left
    preorder(node[cur - 'A'].second);  // right
}

// 중위 순회 : 왼쪽 자식 - 루트 노드 - 오른쪽 자식
void inorder(char cur) {
    if (cur == '.') return;
    inorder(node[cur - 'A'].first);   // left
    cout << cur;                      // root
    inorder(node[cur - 'A'].second);  // right
}

// 후위 순회 : 왼쪽 자식 - 오른쪽 자식 - 루트 노드
void postorder(char cur) {
    if (cur == '.') return;
    postorder(node[cur - 'A'].first);   // left
    postorder(node[cur - 'A'].second);  // right
    cout << cur;                        // root
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    char root, right, left;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> root >> left >> right;
        node[root - 'A'].first = left;
        node[root - 'A'].second = right;
    }
    preorder('A');  // 전위
    cout << '\n';
    inorder('A');  // 중위
    cout << '\n';
    postorder('A');  // 후위
}