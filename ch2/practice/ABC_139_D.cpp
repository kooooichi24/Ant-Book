#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  long long sum = 0;
  for (int i = 1; i <= N-1; i++) {
    sum += i;
  }
  cout << sum << endl;
  return 0;
}