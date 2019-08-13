#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  scanf("%d %d", &A, &B);
  
  int addition, subtraction, multiplication;
  addition = A + B;
  subtraction = A - B;
  multiplication = A * B;
  
  int ma = max( {addition, subtraction, multiplication} );
  printf("%d", ma);
  
  return 0;
}