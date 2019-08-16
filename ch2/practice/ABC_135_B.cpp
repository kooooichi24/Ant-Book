#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 50

int main() {
  int N;
  int p[MAX_N], p2[MAX_N];
  int cnt = 0;

  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &p[i]);
    p2[i] = p[i];
  }


  sort(p, p + N);
  for (int i = 0; i < N; i++) {
    if (p[i] != p2[i]) cnt++;
  }
  if (cnt <= 2) printf("%s", "YES");
  else printf("%s", "NO");

  return 0;
}