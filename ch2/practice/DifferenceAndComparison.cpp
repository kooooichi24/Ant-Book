/**
 * This file show results that difference and comparison of two pointer variables.
 * first, array[0]=1, array[1]=2, array[2]=3, array[4]=3, array[4]=5
 * second, print array value in descending order.
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int array[5];
  int *p;

  array[0] = 1;
  // p contains &array[1].
  p = array + 1;


  while (p < array + 5) {
    *p = *(p - 1) + 1; 
    p++;
  }
  while (p > array) {
    p--;
    printf("%d ", *p);
  }

  return 0;
}