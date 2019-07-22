/**
 * Copy all the contents of int a[10] to int b[10].
 * Use the pointer to display contents of b.
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int b[10];
  int *p, *q;

  p = a;
  q = b;

  while(p < a + 10) {
    *q = *p;
    p++;
  }
  for (q = a; q < a + 10; q++) {
    printf("%4d", *q);
  }

  return 0;
}