#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<vector<int>> A(N, vector<int>(N, -1));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      cin >> A[i][j];
    }
  }

  int cnt = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;

      if (A[i][j] == cnt) {
        if (A[i][j] == A[j][i]) {
          A[i][j] = -1;
          A[j][i] = -1;
        } else {
          
        }
      }
    }
  }
  return 0;
}