#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
const int MAX_N = 20000;
int L[MAX_N];

void solve() {
  ll ans = 0;

  // 板が1本になるまで適用
  while(N > 1) {
    // 一番短い板をmii1, 次に短い板をmii2を求める
    int mii1 = 0, mii2 = 1;
    if (L[mii1] > L[mii2]) swap(mii1, mii2);

    for (int i = 2; i < N; i++) {
      if (L[i] < L[mii1]) {
        mii2 = mii1;
        mii1 = i;
      } else if (L[i] < L[mii2]) {
        mii2 = i;
      }
    }

    // それらを併合
    int t = L[mii1] + L[mii2];
    ans += t;

    if (mii1 == N - 1) swap(mii1, mii2);
    L[mii1] = t;
    L[mii2] = L[N - 1];
    N--;
  }

  printf("%lld\n", ans);
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &L[i]);
  }
  solve();
}