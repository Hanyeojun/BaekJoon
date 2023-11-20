#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        string org, tmp;
        bool flag = true;
        cin >> org;
        tmp = org;
        reverse(tmp.begin(), tmp.end());
        string sum = to_string(stoi(org) + stoi(tmp));

        for (int i = 0; i < sum.length() / 2; i++) {
            if(sum[i]!=sum[sum.length()-1-i]){
                flag = false;
            }
        }
        if (flag) cout << "YES\n";
        else
            cout << "NO\n";
    }
}