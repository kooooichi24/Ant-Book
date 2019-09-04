#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int D; cin >> D;
  string res;
  if (D == 25) res = "Christmas";
  else if (D == 24) res = "Christmas Eve";
  else if (D == 23) res = "Christmas Eve Eve";
  else res = "Christmas Eve Eve Eve";
  cout << res << endl;
  return 0;
}