#include "iostream"
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n, m, r = 1;
        cin>>n>>m;
        long long res = 1;
        for(int i=m;i>m-n;i--){
            res*=i;
            res/=r++;
        }
        cout<<res<<'\n';
    }
}