#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<int> b(n-1);
  rep(i,n-1) cin >> b[i];

  int ans = 0;
  for (int i = 1; i < n-1; i++) {
    ans += min(b[i], b[i-1]);
  }
  ans += b[0];
  ans += b[n-2];
  cout << ans << endl;
  return 0;
}