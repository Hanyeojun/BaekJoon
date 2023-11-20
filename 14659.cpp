#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
  int n, result = 0;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v.push_back(tmp);
  }
  int noww, cnt;
  for (int i = 0; i < n; i++) {
    noww = v[i];
    cnt = 0;
    for (int j = i + 1; j < n; j++) {
      if (noww < v[j])
        break;
      else
        cnt++;
    }
    result = max(result, cnt);
  }
  cout << result;
}