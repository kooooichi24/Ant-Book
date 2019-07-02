// https://atcoder.jp/contests/abc079/tasks/abc079_c

#include<iostream>
#include<algorithm>
#include<vector>
#include <string>
#include<math.h>
using namespace std;

int main() {
  string s; cin >> s;
  int n = s.size();
  
  for (int bit = 0; bit < (1<<(n-1)); bit++) {
    int ans = s[0] - '0';
    for (int i = 0; i < n-1; i++) {
      if (bit & (1 << i)) {
        ans += s[i + 1] - '0';
      } else {
        ans -= s[i + 1] -'0';
      }
    }
    
    if (ans == 7) {
      cout << s[0];
      for (int i = 0; i < n-1; i++) {
        if (bit & (1 << i)) {
          cout << "+" << s[i + 1];
        } else {
          cout << "-" << s[i + 1];
        }
      }
      cout << "=7" << "\n";
      break;
    }
  }
}