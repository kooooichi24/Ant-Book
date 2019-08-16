#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N >> A >> B;
  
  int ans = min(N*A, B);
  cout << ans << endl; 
  
  return 0;
}