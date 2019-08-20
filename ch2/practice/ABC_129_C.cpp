#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int N, M;
vector<bool> issafe;

int main() {
  cin >> N >> M;  
  issafe.assign(N+1, true);
  for (int i = 0; i < M; i++) {
    int a; cin >> a;
    issafe[a] = false;
  }
  
  vector<int> dp(N+1, 0);
  dp[0] = 1;
  if (issafe[1]) dp[1] = 1;

  for (int i = 2; i <= N; i++) {
    if(issafe[i-1]) dp[i] += dp[i-1];
    if(issafe[i-2]) dp[i] += dp[i-2];
    dp[i] %= MOD;
  }
  cout << dp[N] << endl;
  return 0;
}