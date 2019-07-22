 /**
  * This file shows about adding pointer value and integer value.
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
  for (int i = -n; i < N - n; i++) {
    // This following is the same as "array[i+n]=i".
    // P has a pointer value pointing to array[n].
    // ex) p-2=&array[0], p-1=&array[1], ...
    // thus *(p-2)=array[0].
    *(p + i) = i;
  }

  for (int i = 0; i < N; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");
  return 0;

}