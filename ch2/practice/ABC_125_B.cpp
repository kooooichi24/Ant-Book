#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> C, V;

int main() {
  cin >> N;
  C.resize(N);
  V.resize(N);
  for (int i = 0; i < N; i++) cin >> V[i];
  for (int i = 0; i < N; i++) cin >> C[i];


  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (V[i] - C[i] > 0) ans += V[i] - C[i];
  }
  cout << ans << endl;
  return 0;
}