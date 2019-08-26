#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll N, M;
vector<pair<ll, ll>> ab;

int main() {
  cin >> N >> M;
  ab.resize(N);
  int a, b;
  for (int i = 0; i < N; i++) {
    cin >> a >> b;
    ab[i] = make_pair(a, b);
  }

  
  sort(ab.begin(), ab.end());
  ll ans = 0;
  for (int i = 0; i < N; i++) {
    if (ab[i].second <= M) {
      ans += ab[i].first * ab[i].second;
      M -= ab[i].second;
    } else {
      ans += ab[i].first * M;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}