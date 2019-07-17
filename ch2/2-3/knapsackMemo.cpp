#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n, W;
const int MAX_N = 100, MAX_W = 10000;
int weight[MAX_N], value[MAX_N];
// メモ化テーブル
int dp[MAX_N + 1][MAX_W + 1];

int knap(int i, int j) {
  if (dp[i][j] >= 0) {
    // すでに調べたことがあるならばその結果を再利用
    return dp[i][j];
  }

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
  // 結果をテーブルに記憶する
  return dp[i][j] = res;
}

void solve() {
  // まだ調べていないことを表す-1でメモ化テーブルを初期化
  memset(dp, -1, sizeof(dp));
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