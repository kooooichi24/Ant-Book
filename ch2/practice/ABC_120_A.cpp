#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  cout << ((B/A)>C ? C : B/A) << endl;
  return 0;
}