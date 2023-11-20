#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  int k, n, t;
  cin >> k;
  for (int j = 1; j <= k; j++) {
    int max = -1;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
      cin >> t;
      v.push_back(t);
    }

    stable_sort(v.begin(), v.end(),greater<int>());

    for (int i = 0; i < n - 1; i++) {
      if (max < v[i] - v[i + 1]) {
        max = v[i] - v[i + 1];
      }
    }
    cout << "Class " << j << '\n'
         << "Max " << v[0] << ", Min " << v[n - 1] << ", Largest gap " << max
         << '\n';
  }
}