#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, R;
const int MAX_N = 1000;
int X[MAX_N];

void solve() {
  sort(X, X + N);
  
  int i = 0, ans = 0;
  while (i < N) {
    // sはカバーされていない一番左の点
    int s = X[i++];
    // sから距離Rを超える点まで進む
    while (i < N && X[i] <= s + R) i++;
    // pはsから距離Rを超える点から1つ戻った点
    int p = X[i - 1];
    // pから距離Rを超える点まで進む
    while (i < N && X[i] <= p + R) i++;
    
    ans++;
  }

  printf("%d\n", ans);
}

int main() {
  scanf("%d %d", &N, &R);
  for (int i = 0; i < N; i++) {
    scanf("%d", &X[i]);
  }
  solve();
}