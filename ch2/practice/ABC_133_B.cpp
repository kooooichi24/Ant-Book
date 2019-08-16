#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


bool is_integer( double x ){
  return floor(x) == x;
}

int main() {
  int N, D;
  cin >> N >> D;
  int X[N][D];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < D; j++) {
      cin >> X[i][j];
    }
  }
  
  int cnt = 0;
  float ans;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      ans = 0;
      for (int d = 0; d < D; d++) {
        ans += pow(abs(X[i][d] - X[j][d]), 2);
      }
      ans = sqrt(ans);

      if (is_integer(ans)) cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}