#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X; cin >> N >> X;
  vector<int> L(N);
  for (int i = 0; i < N; i++) cin >> L[i];


  int sum = 0;
  int cnt = 1;
  for (int i = 0; i < N; i++) {
    sum += L[i];
    if (sum > X) break;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}