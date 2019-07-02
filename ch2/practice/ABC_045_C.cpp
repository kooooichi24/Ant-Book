// https://atcoder.jp/contests/arc061/tasks/arc061_a

#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
#include<math.h>
typedef long long int ll;
using namespace std;

int main() {
  string s; cin>>s;
  int n=s.size();
  ll ans=0;

  for (int bit=0; bit< 1<<(n-1); bit++) {
    ll ma = s[0] - '0';
    for (int i=0; i<n-1; i++){
      if (bit & (1 << i)) {
        ans+=ma;
        ma=s[i+1]-'0';
      } else {
        ma=ma*10+(s[i+1]-'0');
      }
    }
    ans+=ma;
  }
  cout << ans << "\n";
}