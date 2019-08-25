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
  for (int bit = 1; bit < (1<<N); bit++) {
    int t1 = 0, t2 = 0;
    for (int i = 0; i < N; i++) {
      if (bit & (1<<i)) {
        t1 += t[i];
      } else {
        t2 += t[i];
      }
    }
    min_time = min(min_time, max(t1, t2));
  }
  cout << min_time << endl;
  return 0;
}