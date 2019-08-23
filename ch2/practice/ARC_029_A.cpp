#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> t;

int main() {
  cin >> N;
  t.resize(N);
  for (int i = 0; i < N; i++) cin >> t[i];


  int min_time = 1<<19;
  int sum_time = accumulate(t.begin(), t.end(), 0);
  int ans;
  for (int bit = 1; bit < (1<<N); bit++) {
    int total = 0;
    for (int i = 0; i < N; i++) {
      if (bit & (1<<i)) {
        total += t[i];
      }
    }
    int a = sum_time - total;
    if (abs(a - total) < min_time) {
      min_time = abs(a - total);
      ans = (total == min_time) ? total : total + min_time;
    }
  }
  cout << ans << endl;
  return 0;
}