#include<iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[500][500] = {0};
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i + 1; j++) {
      cin>>arr[i][j];
    }
  }
  for (int i=n-1;i>0;i--) {
    for (int j = 0; j < i; j++) {
      arr[i-1][j]+=max(arr[i][j],arr[i][j+1]);
    }
  }
  cout<<arr[0][0];
}