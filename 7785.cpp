#include <iostream>
#include <map>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    map<string, string, greater<>> mapp;
    while (t--) {
        string name, hb;
        cin >> name >> hb;
        mapp[name] = hb;
    }
    map<string, string>::iterator it;
    for (it = mapp.begin(); it != mapp.end(); it++) {
        if (it->second == "enter") cout << it->first << '\n';
    }
}