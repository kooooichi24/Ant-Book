#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> v(5);
  for (int i = 0; i < 5; i++) cin >> v[i];

  for (int i = 1; i < 5; i++) {
    if (v[i]%10 == 0) swap(v[i-1], v[i]);
    else if (v[i-1]%10 < v[i]%10) swap(v[i-1], v[i]);
  }

  int ans = 0;
  for (int i = 0; i < 5; i++) {
    if (v[i]%10 == 0) ans += v[i];
    else if (i != 4) ans += v[i] + (10-v[i]%10);
    else ans += v[i];
  }
  cout << ans << endl;
  return 0;
}