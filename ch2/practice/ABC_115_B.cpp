#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> p(N);
  for (int i = 0; i < N; i++) cin >> p[i];
  int maxPrice = *max_element(p.begin(), p.end());
  int ans = accumulate(p.begin(), p.end(), 0) - maxPrice/2; 
  cout << ans << endl;
  return 0;
}