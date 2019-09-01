#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) cin >> H[i];

  int max_cnt = 0;
  int cnt = 0;
  for (int i = 0; i < N-1; i++) {
    if (H[i] >= H[i+1]) {
      cnt++;
      max_cnt = max(max_cnt, cnt);
    } else {
      cnt = 0;
    }
  }
  cout << max_cnt << endl;
  return 0;
}