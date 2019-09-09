#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> py[n];
  rep(i,m) {
    int p, y;
    cin >> p >> y;
    p--;
    py[p].push_back({y,i});
  }


  rep(i,n) {
    sort(py[i].begin(), py[i].end());
  }
  pair<int, int> ans[m];
  rep(i,n) {
    rep(j,py[i].size()) {
      ans[py[i][j].second] = {i+1, j+1};
    }
  }
  rep(i,m) {
    cout << setw(6) << setfill('0') << ans[i].first;
    cout << setw(6) << setfill('0') << ans[i].second << "\n";
  }
  return 0;
}