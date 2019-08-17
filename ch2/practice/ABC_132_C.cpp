#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> d(N);
  for (int i=0; i<N; i++) cin >> d[i];

  sort(d.begin(), d.end());
  int half = N / 2;
  int ans = d[half] - d[half-1];
  
  cout << ans << endl;
  return 0;
}