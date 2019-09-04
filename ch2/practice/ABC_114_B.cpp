#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  int minValue = 1<<19;
  for (int i = 0; i < S.size()-2; i++) {
    string s = S.substr(i, 3);
    int si = stoi(s);
    minValue = min(minValue, abs(753-si));
  }
  cout << minValue << endl;
  return 0;
}