#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; cin >> N >> M;
  vector<int> like(M, 0);
  for (int i = 0; i < N; i++) {
    int K;
    cin >> K;

    for (int k = 0; k < K; k++) {
      int a;
      cin >> a;
      a--;
      like[a]++;
    }
  }
  cout << count(like.begin(), like.end(), N) << endl;
  return 0;
}