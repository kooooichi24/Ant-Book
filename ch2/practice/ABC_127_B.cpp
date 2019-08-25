#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int r, D, x;

int main() {  
  cin >> r >> D >> x;

  int ans;
  for (int i = 0; i < 10; i++) {
    ans = r*x - D;
    cout << ans << endl;
    x = ans;
  }
  return 0;
}