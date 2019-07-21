/**
 * This file show that how to access array by pointer.
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N = 5;
  int array[N];
  int *p;
  int n = 2;

  p = &array[n];

  // The following is the same as "array[i+n]=i".
  for (int i = -n; i < N - n; i++) {
    p[i] = i;
  }

  for (int i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}