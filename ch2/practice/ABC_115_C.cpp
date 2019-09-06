#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> h(n);
  rep(i,n) cin >> h[i];
  

  sort(h.begin(), h.end());
  ll ans = pow(10,9)+1;
  for (int i = k-1; i < n; i++) {
    ans = min(ans, h[i]-h[i-k+1]);
  }
  cout << ans << endl;
  return 0;
}