#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;

int N;
int S[MAX_N], T[MAX_N];
pair<int, int> itv[MAX_N];

// 選べる仕事の中で、終了時刻が最も早いものを選ぶことを繰り返す。
void solve() {
  for (int i = 0; i < N; i++) {
    itv[i].first = T[i];
    itv[i].second = S[i];
  }

  sort(itv, itv + N);

  int ans = 0, t = 0;
  for (int i = 0; i < N; i++) {
    if (t < itv[i].second) {
      t = itv[i].first;
      ans++;
    }
  }
  printf("%d", ans);
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < 5; i++) {
    scanf("%d", &S[i]);
  }
  for (int i = 0; i < 5; i++) {
    scanf("%d", &T[i]);
  }
  solve();
}