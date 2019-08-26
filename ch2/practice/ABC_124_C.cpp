#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int N = S.size();

  string start_zero;
  string start_one;
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0) {
      start_zero += "0";
      start_one  += "1";
    } else {
      start_zero += "1";
      start_one  += "0";
    }
  }

  int z = 0, o = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] != start_zero[i]) z++;
    if (S[i] != start_one[i]) o++;
  }
  cout << min(z, o) << endl;
  return 0;
}