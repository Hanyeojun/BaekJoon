#include "iostream"
using namespace std;
int main() {
  int k;
  int dpA[45], dpB[45];
  cin >> k;
  dpA[0] = 1;
  dpB[0] = 0;

  dpA[1] = 0;
  dpB[1] = 1;

  dpA[2] = 1;
  dpB[2] = 1;
  for (int i = 3; i <= k; i++) {
    dpA[i] = dpA[i - 1] + dpA[i - 2];
    dpB[i] = dpB[i - 1] + dpB[i - 2];
  }
  cout << dpA[k] << " " << dpB[k];
}