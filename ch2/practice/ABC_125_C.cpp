#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b) { return b ? GCD(b, a%b) : a; }

int main() {
  int N; cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];


  vector<int> left(N+1, 0), right(N+1, 0);
  for (int i = 0; i < N; i++) left[i+1] = GCD(left[i], A[i]);
  for (int i = N-1; i >= 0; i--) right[i] = GCD(right[i+1], A[i]);

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int l = left[i];
    int r = right[i+1];

    ans = max(ans, GCD(l, r));
  }
  cout << ans << endl;
  return 0;
}