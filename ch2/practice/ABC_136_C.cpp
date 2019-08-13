#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100000

int N;
int arr[MAX_N + 1];

void solve() {
  int ma = arr[0];
  for (int i = 1; i < N; i++) {
    if (ma - 2 >= arr[i]) {
      printf("No");
      return;
    }
    ma = max(ma, arr[i]);
  }
  printf("Yes");
  return;
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &arr[i]);
  }
  solve();
  return 0;
}