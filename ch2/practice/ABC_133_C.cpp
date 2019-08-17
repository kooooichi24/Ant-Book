#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  long long L, R, ans=2019;
  cin >> L >> R;
  
  for(long long i=L; i<=R; i++) {
    for(long long j=i; j<=R; j++) {
      if(i!=j) ans=min(ans, (i*j)%2019);
      if(ans==0){
        cout << 0 << endl;
        return 0;
      }
    }
  }
  cout << ans << endl;
  return 0;
}