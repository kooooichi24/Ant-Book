#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int red = count(s.begin(), s.end(), '0');
  int blue = count(s.begin(), s.end(), '1');
  cout << 2*min(red, blue) << endl;
  return 0;
}