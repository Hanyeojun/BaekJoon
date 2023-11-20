#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int main() {
  int n, d = 0;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    v.push_back(t);
  }
  sort(v.begin(), v.end(), greater<int>()); // 오래 걸리는 나무부터 심기
  
  for (int i = 0; i < n; i++)
    d = max(d, v[i] + i + 1); //묘목 구입한 날 = 1일
  cout << d + 1; //묘목 다 자란 다음날 초대 가능
}