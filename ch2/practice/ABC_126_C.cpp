#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

double N, K;

double continuous(double i) {
  double re = 0;
  while(i < K) {
    i *= 2;
    re++;
  }
  return re;
}

int main() {
  cin >> N >> K;

  
  double ans = 0;
  for (double i = 1; i < N + 1; i++) {
    ans += pow(0.5, continuous(i)) / N;  
  }
  cout << fixed << setprecision(12) << ans << endl;
  return 0;
}