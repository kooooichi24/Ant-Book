#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;
  vector<pair<int, int>> ct(N);
  int c, t;
  for (int i = 0; i < N; i++) {
    cin >> c >> t;
    ct[i] = make_pair(c, t);
  }


  int min_cost = 1<<19;
  bool flag = false;
  for (int i = 0; i < N; i++) {
    if (ct[i].second <= T) {
      min_cost = min(min_cost, ct[i].first);
      flag = true;
    }
  }
  if (flag) cout << min_cost << endl;
  else cout << "TLE" << endl;
  return 0;
}