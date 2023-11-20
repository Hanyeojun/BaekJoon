#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int t;
    cin >> t;
    vector<int> ans;
    int alp[26] = {0};
    while (t--) {
        string str;
        cin >> str;
        alp[str[0] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (alp[i] >= 5) {
            ans.push_back(i);
        }
    }
    if (ans.empty()) {
        cout << "PREDAJA";
    } else {
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++) {
            cout << (char)(ans[i] + 'a');
        }
    }
}