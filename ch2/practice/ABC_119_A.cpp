#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S; cin >> S;
  cout << (S <= "2019/04/30" ? "Heisei" : "TBD") << endl;
  return 0;
}