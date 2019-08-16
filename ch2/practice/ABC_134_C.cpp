#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];
  

  int ans;
  vector<int> copy(N);
  copy = A;
  sort(copy.begin(), copy.end());
  int maximum = copy[N - 1];
  int second = copy[N - 2];

  for (int i = 0; i < N; i++) {
    if (A[i] == maximum) cout << second << endl;
    else cout << maximum << endl;
  }

  return 0;
}