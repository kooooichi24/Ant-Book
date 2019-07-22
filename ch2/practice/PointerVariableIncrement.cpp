/**
 * In this program, by executing p++ for the pointer variable p to which the address of the start of array is assigned, the reference destination of *p is changed from array[0] to array[4], A value is assinged to each element of array.
 * And while doing p--, the value are displayed in the order of array[4] to array[0].
 */

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
  int N = 5;
  int array[N];
  int *p;
  
  p = array;
  for (int i = 0; i < N; i++) {
    *p = i;
    p++;
  }
  for (int i = 0; i < N; i++) {
    p--;
    printf("%d ", *p);
  }

  return 0;
}