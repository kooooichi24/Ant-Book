#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; 
  cin >> N;
  vector<int> L(N);
  int sum = 0;
  for (int i = 0; i < N; i++) {
    cin >> L[i];
    sum += L[i];
  }
  
  int maxLength = *max_element(L.begin(), L.end());

  if (maxLength < sum-maxLength) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}