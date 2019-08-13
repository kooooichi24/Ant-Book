#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100050

int N;
string s[MAX_N];

void solve() {
  long long ans = 0;
  long long count = 1;

  for (int i = 0; i < N; i++) {
    sort(s[i].begin(), s[i].end());
  }
  
  sort(s, s + N);

  for (int i = 1; i < N; i++) {
    if (s[i] == s[i - 1]) {
      count++;
    } else {
      ans += (count * (count - 1)) / 2;
      count = 1;
    }

    if (i == N - 1) ans += (count * (count - 1)) / 2;
  }

  cout << ans;
}

int main() {  
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> s[i];
  }
  solve();

  return 0;
}