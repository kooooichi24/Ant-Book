#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int> L, R;

int main() {
  cin >> N >> M;
  L.resize(M);
  R.resize(M);
  for (int i = 0; i < M; i++) {
    cin >> L[i] >> R[i];
  }


  int left = L[0];
  int right = R[0];
  for (int i = 1; i < M; i++) {
    if (left <= L[i] && L[i] <= right) {
      left = L[i];
    } else if (L[i] > right) {
      cout << 0 << endl;
      return 0;
    }
    
    if (left <= R[i] && R[i] <= right) {
      right = R[i];
    } else if (R[i] < left) {
      cout << 0 << endl;
      return 0;
    }
  }
  cout << right-left+1 << endl;
  return 0;
}