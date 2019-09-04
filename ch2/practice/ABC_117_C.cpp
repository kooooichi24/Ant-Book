#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
  int N, M;
  cin >> N >> M;
  vector<ll> X(M);
  for (int i = 0; i < M; i++) cin >> X[i];


  sort(X.begin(), X.end());
  vector<ll> diffs;
  for (int i = 1; i < M; i++) diffs.push_back(X[i] - X[i-1]);
  sort(diffs.begin(), diffs.end(), greater<ll>());
  ll res = X.back() - X[0];
  if (N >= M) res = 0;
  else for (int i = 0; i < N-1; i++) res -= diffs[i];
  cout << res << endl;
  return 0;
}