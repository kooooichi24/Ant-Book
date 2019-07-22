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
  
  // assign a pointer to the first element of the array to an integer pointer variable.
  // The following is the same meaning as "p=&array[0]".
  p = array;

  // The following is the same meaning as "array[i]=i".
  for (int i = 0; i < N; i++) {
    p[i] = i;
  }

  for (int i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}