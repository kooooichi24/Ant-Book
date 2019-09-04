#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, A;
  cin >> N >> T >> A;
  vector<int> H(N);
  for (int i = 0; i < N; i++) cin >> H[i];

  double closePoint = 1<<19;
  int ans;
  for (int i = 0; i < N; i++) {
    double temp = T - H[i]*0.006;
    if (abs(A-temp) < closePoint) {
      closePoint = abs(A-temp);
      ans = i;
    }
  }
  cout << ans+1 << endl;
  return 0;
}