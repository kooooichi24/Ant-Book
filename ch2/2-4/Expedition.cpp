#include <queue>
#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;
int N, L, P;
int A[MAX_N], B[MAX_N];

void solve() {
  // add goal infomation to gas stations for simplicity.
  A[N] = L;
  B[N] = 0;
  N++;  

  // Priority queue to manage gas stations
  priority_queue<int> que;

  // ans:count of replenishments
  // pos:current posiont
  // tank:the amount of gasoline in the tank
  int ans = 0, pos = 0, tank = P;

  for (int i = 0; i < N; i++) {
    // next distance
    int distance = A[i] - pos;
    
    // replenish gasoline untill it reaches a sufficient amount
    while (tank - distance < 0) {
      if (que.empty()) {
        puts("-1");
        return;
      }
      tank += que.top();
      que.pop();
      ans++;
    }

    tank -= distance;
    pos = A[i];
    que.push(B[i]);
  }

  printf("%d", ans);
}

int main() {
  scanf("%d %d %d", &N, &L, &P);
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < N; i++) {
    scanf("%d", &B[i]);
  }
  solve();
}