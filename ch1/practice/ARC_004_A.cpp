// https://atcoder.jp/contests/arc004/tasks/arc004_1

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;

int N;
int x[MAX_N], y[MAX_N];
double max_distance = 0;


void solve() {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i != j) {
        double distance = sqrt( pow(x[i] - x[j], 2.0) + pow(y[i] - y[j], 2.0) );
        max_distance = distance > max_distance ? distance: max_distance;
      }
    }
  }
  printf("%f\n", max_distance);
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &x[i], &y[i]);
  }
  solve();
}