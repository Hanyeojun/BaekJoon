#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  int n, sum = 0, res = 0;
  vector<int>v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(),v.end());
  for (int i = 0; i < n; i++) {
    sum += v[i];
    res+=sum;
  }
  cout<<res;
}