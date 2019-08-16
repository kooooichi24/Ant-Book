#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  int ans = N / (1 + 2 * D);
  if ( N % (1 + 2 * D) != 0) ans++;
  cout << ans << endl;

  return 0;
}