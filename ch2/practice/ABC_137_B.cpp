#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int K, X;
  scanf("%d %d", &K, &X);

  for (int i = -K + 1; i < K; i++) {
    printf("%d ", X + i);
  }

  return 0;
}