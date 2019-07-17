#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n, W;
const int MAX_N = 10000;
int weight[MAX_N], value[MAX_N];

// i番目以降の品物から重さの総和がj以下となるように選択する
int knap(int i, int j) {
  // printf("%d%d\n", i, j);
  int res;
  if (i == n) {
    // 商品が残っていないため，0を代入する
    res = 0;
  } else if (j < weight[i]) {
    // 容量不足のため，入れない処理のみ行う
    res = knap(i + 1, j);
  } else {
    // 入れると最大になるとは限らないため，入れる時と入れない時の大きい時をとる
    res = max(knap(i + 1, j), knap(i + 1, j - weight[i]) + value[i]);
  }
  // printf("res=%d\n", res);
  return res;
}

void solve() {
  printf("%d\n", knap(0, W));
}

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &weight[i], &value[i]);
  }
  scanf("%d", &W);
  solve();
}