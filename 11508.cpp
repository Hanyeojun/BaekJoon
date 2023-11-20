#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  int n, r = 0;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  sort(v.begin(), v.end(),greater<int>());
  for (int i = 0; i < v.size(); i++) {
    if ((i + 1) % 3 == 0)
      continue;
    r += v[i];
  }
  cout << r;
}