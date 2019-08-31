#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;



int main() {
  int n, q; cin >> n >> q;
  string str; cin >> str;

  vector<int> l, r;
  l.resize(q);
  r.resize(q);
  for (int i = 0; i < q; i++) cin >> l[i] >> r[i];


  vector<int> v(n+1, 0);
  for (int i = 0; i < n; i++) {
    if (i+1<n && str[i]=='A' && str[i+1]=='C') v[i+1] = v[i] + 1;
    else v[i+1] = v[i];
  }

  for (int i = 0; i < q; i++) {
    cout << v[r[i]-1] - v[l[i]-1] << endl;
  }
  return 0;
}