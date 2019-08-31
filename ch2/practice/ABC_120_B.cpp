#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  if (a < b) swap(a, b);
  vector<int> vec;
  for (int i = 1; i < b+1; i++) {
    if (a%i==0 && b%i==0) vec.push_back(i);
  }
  cout << vec[vec.size()-k] << endl;
  return 0;
}