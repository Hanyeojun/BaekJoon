// 2033년 밈 투표
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;

    string str;
    string pledge[7] = {"Never gonna give you up",  "Never gonna let you down", "Never gonna run around and desert you",
                        "Never gonna make you cry", "Never gonna say goodbye",  "Never gonna tell a lie and hurt you",
                        "Never gonna stop"};
    vector<int> v(n, 0);

    cin.ignore();

    for (int i = 0; i < n; i++) {
        getline(cin, str);
        for (int j = 0; j < 7; j++) {
            if (str.compare(pledge[j]) == 0) {  //
                v[i] = 0;
                break;
            } else {
                v[i]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}