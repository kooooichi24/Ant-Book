#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  char b;
  cin >> b;
  char res;
  if (b == 'A') res = 'T';
  else if (b == 'T') res = 'A';
  else if (b == 'C') res = 'G';
  else res = 'C';
  cout << res << endl;
  return 0;
}