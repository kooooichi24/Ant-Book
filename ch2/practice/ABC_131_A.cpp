#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S; cin >> S;

  bool state = true;
  for (int i = 0; i < S.size() - 1; i++) {
    if (S[i] == S[i + 1]) {
      state = false;
      break;
    }
  }
  if (state) printf("Good");
  else printf("Bad");
  
  return 0;
}