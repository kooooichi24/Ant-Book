#include <cstdio>
#include <bits/stdc++.h>

const int MAX_N = 50;

int main() {
  int n, m, k[MAX_N];

  // 標準入力より入力
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k[i]);
  }

  // 和がmになる組み合わせが見つかったかどうかのフラグ
  bool f = false;

  // 4種ループにより全通りの出力を試す
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        for (int d = 0; d < n; d++) {
          if (k[a] + k[b] + k[c] + k[d] == m) {
            f = true;
          }
        }
      }
    }
  }

  // 標準出力へ出力
  if (f) puts("Yes");
  else puts("No");
  return 0;
}