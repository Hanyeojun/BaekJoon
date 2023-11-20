#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main(){
    int n, m, cnt = 0;
    string str;
    vector<string> res;
    map<string, bool> mm;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> str;
        mm.insert({str,true}); 
    }
    for (int i = 0; i < m;i++){
        cin >> str;
        if(mm[str]){
            res.push_back(str);
            cnt++;
        }
    }
    sort(res.begin(), res.end());
    cout << cnt << '\n';
    for (int i = 0; i < res.size(); i++) cout << res[i] << '\n';
}