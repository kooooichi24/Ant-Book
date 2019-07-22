/**
 * This file learn about indirect references.
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // a and b are integer varibles
  int a, b;
  // p and q are integer pointer-type variables
  int *p, *q;

  // display address of variable
  printf("&a == %10p, &b == %10p, &p == %10p, &q == %10p\n", &a, &b, &p, &q);

  // assign the address
  p = &a;
  q = &b;

  *p = 3;
  *q = *p + 2;

  printf("a == %10d, b == %10d, p == %10p, q == %10p\n", a, b, p, q);

  return 0;
}