#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N; 
double ans = 0;

int main() {
  cin >> N;  
  for (int i = 0; i < N; i++) {
    double x;
    string u;
    cin >> x >> u;
    if (u == "JPY") ans += x;
    else ans += x * 380000.0;
  }
  cout << ans << endl;
  return 0;
}