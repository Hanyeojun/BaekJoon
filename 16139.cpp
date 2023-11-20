#include "iostream"
#include "string"
using namespace std;
  int arr[200000];
  int res[26][200000];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int q,l,r;
  string str;
  char ch;

  cin>>str;
  for (int i = 0; i < 26; i++) {
    char tmp = (char)(i + 97);
    for (int j = 0; j < str.length(); j++) {
      if (str[j] == tmp) {
        res[i][j]=res[i][j-1]+1;
      } else {
        res[i][j]=res[i][j-1];
      }
    }
  }
  cin >> q;
  while (q--) {
    cin >> ch >> l >> r;
    cout << res[ch - 'a'][r] - res[ch - 'a'][l - 1] << '\n';
  }
}