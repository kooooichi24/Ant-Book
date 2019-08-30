#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;
  S[K-1] = tolower(S[K-1]);
  cout << S << endl;
  return 0;
}