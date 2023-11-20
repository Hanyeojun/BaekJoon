#include "iostream"
#include "vector"
#include "algorithm"
using namespace std;
vector<int> v;
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }
  stable_sort(v.begin(), v.end(), greater<int>());
  for (int i = 0; i < n; i++) {
    cout << v[i] << '\n';
  }
}