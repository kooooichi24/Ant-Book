/**
 * declare integer type variables a, b and c and integer type pointer variables p, q and r.
 * assign addresses a, b and c to p, q and r.
 * use only p, q and r, you can do this following.
 * 
 * "Substitute 3 and 5 respectively to a and b, 
 *  further substitute the value of a + b into c, and finally display the values of a, b and c." 
 * 
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  int *p, *q, *r;

  p = &a;
  q = &b;
  r = &c;

  *p = 3;
  *q = 5;
  *r = *p + *q;

  printf("%d %d %d", *p, *q, *r);

  return 0;
}