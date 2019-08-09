#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int A, B, C;

void solve() {
  int result = C - (A - B);
  if (result > 0) printf("%d", result);
  else printf("%d", 0);
}

int main() {
  scanf("%d %d %d", &A, &B, &C);
  solve();
}