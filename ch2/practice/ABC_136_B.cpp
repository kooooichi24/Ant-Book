#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;

int GetDigit(int num){
  return to_string(num).length();
}

void solve() {
  int ans = 0;
  for (int i = 1; i < N; i++) {
    if (GetDigit(i) % 2 != 0) ans++;
  }
  printf("%d", ans);
}

int main() {
  scanf("%d", &N);
  solve();
}