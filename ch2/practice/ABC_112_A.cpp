#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  int A, B;
  if (N == 2) cin >> A >> B;  
  
  if (N == 1) cout << "Hello World" << endl;
  else cout << A + B << endl;
  return 0;
}