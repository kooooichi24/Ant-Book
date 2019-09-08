#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n; cin >> n;
  vector<int> h(n);
  rep(i,n) cin >> h[i];

  int ans = 0;
  while(*max_element(h.begin(), h.end()) > 0) {
    ans++;

    bool first = false, end = false;
    for (int i=1; i<n-1; i++) {
      if (h[i]<=0 && h[i-1]>0) first = true;
      if (h[i]<=0 && h[i+1]>0 && first) end = true;
      if (first && end) {
        ans++;
        first = false;
        end = false;
      }
    }
    rep(i,n) h[i]--;
  }
  cout << ans << endl;
  return 0;
}