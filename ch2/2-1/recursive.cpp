#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n;

int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n - 1);
}

int main() {
  scanf("%d", &n);
  int ans = fact(n);
  printf("%d", ans);
}