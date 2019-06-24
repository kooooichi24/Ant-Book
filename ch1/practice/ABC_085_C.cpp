// https://atcoder.jp/contests/abc085/tasks/abc085_c

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, Y;
int ans[3];

void solve() {
  for (int i = 0; i <= N; i++) {
    for (int j = 0; j <= N - i; j++){
      if (10000 * i + 5000 * j + 1000 * (N - i - j) == Y){
        ans[0] = i;
        ans[1] = j;
        ans[2] = N - i - j;
      }
    }
  }
  if (ans[0] == 0 && ans[1] == 0 && ans[2] == 0){
    printf("%d %d %d", -1, -1, -1);
  } else {
    printf("%d %d %d", ans[0], ans[1], ans[2]);
  }
}

int main() {
  scanf("%d %d", &N, &Y);
  solve();
}