#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n-1);
  rep(i,n) {
    cin >> a[i];
    a[i]--;
  }
  rep(i,n) cin >> b[i];
  rep(i,n-1) cin >> c[i];


  int ans = 0;
  rep(i,n) {    
    ans += b[a[i]];
  }
  rep(i,n-1) {
    if (a[i]+1 == a[i+1]) ans += c[a[i]];
  }
  cout << ans << endl;
  return 0;
}