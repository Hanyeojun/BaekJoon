#include "iostream"
#include "map"
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  cin >> n >> m;
  map<string,string>p;

  while (n--) {
    string s, t;
    cin >> s >> t;
    p.insert({s,t});
  }
  while(m--) {
    string str;
    cin>>str;
    if (p.find(str)!=p.end()) {
        cout<<p[str]<<'\n';
    }
  }
}