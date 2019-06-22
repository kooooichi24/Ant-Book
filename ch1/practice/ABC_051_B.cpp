// https://atcoder.jp/contests/abc051/tasks/abc051_b

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int S, K;

void solve() {
  int count = 0;
  int sum = 0;

  for (int i = 0; i <= K; i++){
    for (int j = 0; j <= K; j++){
      if (i + j + K >= S && i + j <= S) count++; 
    }
  }

  printf("%d", count);
}

int main() {
  scanf("%d %d", &K, &S);
  solve();
}