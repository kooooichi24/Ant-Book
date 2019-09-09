#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
  double n; cin >> n;
  vector<double> a(n);
  rep(i,n) cin >> a[i];
  
  double s = 0;
  rep(i,n) s += 1/a[i];
  cout << fixed << setprecision(6) << 1/s << endl; 
  return 0;
}