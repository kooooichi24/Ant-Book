/**
 * This file display address of variable.
 * note: the address of the variable is the address of the first byte of the allocated area.
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  char c;
  int i;
  float f;
  double d;

  printf("char   c %p\n"
         "int    i %p\n"
         "float  f %p\n"
         "double d %p\n",
         &c, &i, &f, &d);

  return 0;
}