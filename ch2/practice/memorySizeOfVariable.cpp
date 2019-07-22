/**
 * This file display memory sizes of variable.
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
  printf("char   c %d byte\n"
         "int    i %d byte\n"
         "float  f %d byte\n"
         "double d %d byte\n",
         sizeof(c), sizeof(i), sizeof(f), sizeof(d));
  return 0;
}