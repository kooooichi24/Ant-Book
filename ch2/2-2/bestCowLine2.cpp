#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;
const int MAX_N = 2000;
char S[MAX_N + 1];

void solve() {
  // S[a], S[a+1], ..., S[b]が残っている文字列
  int a = 0; int b = N - 1;
  
  while (a <= b) {
    // 左から見た場合と右から見た場合を比較
    bool left = false;
    for (int i = 0; a + i <= b; i++) {
      if (S[a + i] < S[b - i]) {
        left = true;
        break;
      } else if (S[a + i] > S[b - i]) {
        left = false;
        break;
      }
    }

    if (left) putchar(S[a++]);
    else putchar(S[b--]);
  }
  
  putchar('\n');
}

int main() {
  scanf("%d %s", &N, S);
  solve();
}