#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M; cin >> N >> M;

  vector<vector<int>> vec(M);
  
  for (int i = 0; i < M; i++) {
    int k; cin >> k;
    vec[i].resize(k);
    for (int j = 0; j < k; j++) {
      cin >> vec[i][j];
      --vec[i][j];
    }
  }
  vector<int> p(M);
  for (int i = 0; i < M; i++) cin >> p[i];



  int ans = 0;
  for (int bit = 0; bit < (1<<N); bit++) {
    bool ok = true;
    for (int i = 0; i < M; i++) {
      int con = 0;
      for (int id : vec[i]){
        if(bit & (1<<id)) con++;
      }
      if(con % 2 != p[i]) ok = false;
    }
    if(ok) ans++;
  }
  cout << ans << endl;
  return 0;
}