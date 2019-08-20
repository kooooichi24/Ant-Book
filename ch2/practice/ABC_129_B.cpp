#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> W(N);
  for (int i = 0; i < N; i++) cin >> W[i];
  
  int min_abs = 100000;
  int first = 0;
  int second;
  int sum_W = accumulate(W.begin(), W.end(), 0);
  for (int i = 0; i < N; i++) {
    first += W[i];
    second = sum_W - first;
    min_abs = min(min_abs, abs(first-second));
  }
  cout << min_abs << endl;
  return 0;
}