#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<long long> A(N+1), B(N);
  for (int i = 0; i < N + 1; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];
  long long ans = 0;

  for (int i = 0; i < N; i++) {
    int j = min(A[i], B[i]);
    A[i] -= j;
    B[i] -= j;
    ans += j;
    int k = min(A[i+1], B[i]);
    A[i+1] -= k;
    ans += k;
  }
  
  cout << ans << endl;
}