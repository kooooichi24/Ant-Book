// https://atcoder.jp/contests/abc051/tasks/abc051_b

#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int S, K;

void solve() {
  int answer = 0;
  int sum = 0;

  for (int X = 0; X <= K; X++){
    for (int Y = 0; Y <= K; Y++){
      for (int Z = 0; Z <= K; Z++){
        
        sum = X + Y + Z;
        if (sum == S){
          answer++;
        }
      }
    }
  }

  printf("%d", answer);
}

int main() {
  scanf("%d %d", &K, &S);
  solve();
}