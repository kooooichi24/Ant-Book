#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

ll n;
ll ans = 0;

void loop(ll cur, int use) {
  if (cur > n) return;
  if (use == 0b111) ans++;
  // add 7
  loop(cur*10+7, use|0b100);

  // add 5
  loop(cur*10+5, use|0b010);
  
  // add 3
  loop(cur*10+3, use|0b001);
}

int main() {
  cin >> n;
  loop(0, 0);
  cout << ans << endl;
  return 0;
}