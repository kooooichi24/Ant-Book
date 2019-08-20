#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll gcd(ll x, ll y) {
  return y ? gcd(y, x % y) : x;
}

ll lcm(ll x, ll y) {
  return x/gcd(x, y)*y;
}

int main() {
  ll A, B, C, D;
  cin >> A >> B >> C >> D;

  ll numberA = A-1 - ((A-1)/C + (A-1)/D - (A-1)/lcm(C, D));
  ll numberB = B - (B/C + B/D - B/lcm(C, D));
  ll ans = numberB - numberA;

  cout << ans << endl;
  return 0;
}