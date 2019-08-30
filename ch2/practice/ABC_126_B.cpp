#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin >> s;
  int f = s / 100;
  int l = s % 100;
  if (1 <= f && f <= 12 && 1 <= l && l <= 12) cout << "AMBIGUOUS" << endl;
  else if (1 <= f && f <= 12) cout << "MMYY" << endl;
  else if (1 <= l && l <= 12) cout << "YYMM" << endl;
  else cout << "NA" << endl;
  return 0;
}