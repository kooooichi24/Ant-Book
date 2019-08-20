#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(3);
  for (int i = 0; i < 3; i++) cin >> v[i];

  
  int ans = 10000;
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      ans = min(ans, v[i] + v[j]);
    }
  }
  cout << ans << endl;
  return 0;
}