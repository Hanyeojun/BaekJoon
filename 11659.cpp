#include <iostream>
#include <vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,m;
    vector<int>v;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);
    }
    for(int i=0;i<n;i++){
        v[i]+=v[i-1];
    }
    while(m--){
        int a,b;
        cin>>a>>b;
        cout<<v[b-1]-v[a-2]<<'\n';
    }
}