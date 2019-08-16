#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d %d", &A, &B);

  if ((A + B) % 2 == 0) {
    printf("%d", (A + B) / 2);
  } else {
    printf("IMPOSSIBLE");
  }

  return 0;
}