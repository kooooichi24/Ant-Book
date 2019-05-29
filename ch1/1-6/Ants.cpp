#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100000;
int L, n, x[MAX_N];

void solve() {
  int maxT = 0;
  int minT = 0;
  for (int i=0; i<n; i++) {
    maxT = max(maxT, max(x[i], L - x[i]));
    minT = max(minT, min(x[i], L - x[i]));
  }

  printf("%d %d\n", minT, maxT);
}

int main() {
  scanf("%d %d", &L, &n);
  for (int i=0; i<n; i++) {
    scanf("%d", &x[i]);
  }
  solve();
}