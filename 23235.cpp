#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int cnt = 1;
    while(1){
        getline(cin, str);
        if(str=="0")break;
        cout << "Case " << cnt << ": Sorting... done!" << '\n';
        cnt++;
    }
}