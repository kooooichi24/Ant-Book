//  // https://atcoder.jp/contests/abc104/tasks/abc104_c

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int D, G;
const int MAX_D = 10;
int p[MAX_D + 1], c[MAX_D + 1];

void solve() {
  int ans = 1000;
  for (int bit = 0; bit < (1 << D); bit++) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < D; i++) {
      if (bit & (1 << i)) {
        sum += (i + 1) * 100 * p[i] + c[i];
        count += p[i];
      }
    }

    if (sum >= G) ans = min(ans, count);
    else {
      for (int i = D - 1; i >= 0; i--) {
        if (bit & (1 << i)) continue;
        for (int j = 0; j < p[i]; j++) {
          if (sum >= G) break;
          sum += 100 * (i + 1);
          count++;
        }
      }
    }
    ans = min(ans, count);
  }
  printf("%d\n", ans);
}

int main() {
  scanf("%d %d", &D, &G);
  for (int i = 0; i < D; i++) {
    scanf("%d %d", &p[i], &c[i]);
  }
  solve();
}
