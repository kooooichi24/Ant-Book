#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<ll>> py(n);
  vector<ll> pp(m), yy(m);
  rep(i,m) {
    ll p, y;
    cin >> p >> y;
    p--;
    py[p].push_back(y);
    pp[i] = p;
    yy[i] = y;
  }


  rep(i,n) {
    sort(py[i].begin(), py[i].end());
  }
  rep(i,m) {
    auto result = find(py[pp[i]].begin(), py[pp[i]].end(), yy[i]);
    size_t index = distance(py[pp[i]].begin(), result);
    cout << setw(6) << setfill('0') << pp[i]+1 << setw(6) << setfill('0') << index+1 << "\n";
  }
  return 0;
}