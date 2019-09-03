#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll GCD(ll a, ll b) {
  return b ? GCD(b, a%b) : a; 
}

int main() {
  int N; cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  
  ll ans = A[0];
  for (int i = 0; i < N; i++) {
    ans = GCD(ans, A[i]);
  }
  cout << ans << endl;
  return 0;
}