#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, M, C;
vector<vector<int>> A;
vector<int> B; 

int main() {
  cin >> N >> M >> C;
  B.resize(M);
  for (int i = 0; i < M; i++) cin >> B[i];
  A.resize(N, vector<int>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> A[i][j];
    }
  }


  int cnt = 0;
  for (int i = 0; i < N; i++) {
    int re = 0;
    for (int j = 0; j < M; j++) {
      re += A[i][j] * B[j];
    }
    re += C;
    if (re > 0) cnt++;
  }
  cout << cnt << endl;
  return 0;
}