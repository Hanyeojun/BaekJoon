#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  vector<int>v(3);
  while (1) {
    cin >> v[0] >> v[1] >> v[2];
    if (!v[0] && !v[1] && !v[2]) {
      break;
    }
    sort(v.begin(), v.end());

   if (v[2] >= v[1] + v[0]) {
      cout << "Invalid\n";
   }
   else if (v[0] != v[1] && v[1] != v[2] && v[0] != v[2]) {
      cout << "Scalene\n";
   }
   else {
      if (v[0] == v[1] && v[1] == v[2]){
        cout << "Equilateral\n";
      }
      else
        cout << "Isosceles\n";
   }
  }
}