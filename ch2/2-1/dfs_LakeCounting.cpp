#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, M;
const int MAX_N = 100, MAX_M = 100;
char field[MAX_N][MAX_M+1];

void dfs(int i, int j) {
  field[i][j] = '.';

  for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
      int nx = i + dx, ny = j + dy;
      if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') dfs(nx, ny);
    }
  }
  return;
}


void solve() {
  int count = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (field[i][j] == 'W') {
        dfs(i, j);
        count++;
      }
    }
  }
  printf("%d\n", count);
}

int main() {
  scanf("%d", &N);
  scanf("%d", &M);
  for (int i = 0; i < N; i++) {
    scanf("%s", field[i]);
  }
  solve();
}