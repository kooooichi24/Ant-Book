#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;


  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i]=='A' || s[i]=='C' || s[i]=='G' || s[i]=='T') {
      cnt++;
      ans = max(ans, cnt);
    } else {
      cnt = 0;
    }
  }
  cout << ans << endl;
  return 0;
}