#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 20;
int a[MAX_N], n, k;

bool dfs(int i, int sum) {
  if (i == n) return sum == k;
  return (dfs(i + 1, sum) || dfs(i + 1, sum + a[i]));
}


void solve() {
  if (dfs(0, 0)) printf("Yes\n");
  else printf("No\n");
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);
  solve();
}