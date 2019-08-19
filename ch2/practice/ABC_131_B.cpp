#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L;
  cin >> N >> L;
  vector<int> taste(N);
  for (int i = 0; i < N; i++) taste[i] = L + i;


  int A = L + N - 1;
  int eat;
  int ans = 0;

  if (L >= 0) eat = L;
  else if (A <= 0) eat = A;
  else eat = 0;

  for (int i = 0; i < N; i++) {
    if (taste[i] != eat) ans += taste[i];
  }
  
  cout << ans << endl;
  return 0;
}