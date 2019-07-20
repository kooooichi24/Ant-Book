#include <queue>
#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int N;
const int MAX_N = 20000;
int L[MAX_N];

void solve() {
  ll ans = 0;

  // prepare priority queue
  priority_queue<int, vector<int>, greater<int> > que;
  for (int i = 0; i < N; i++) {
    que.push(L[i]);
  }

  // apply untill there is only one board
  while (que.size() > 1) {
    // take out shortest board, the second shortest board
    int min1, min2;
    min1 = que.top();
    que.pop();
    min2 = que.top();
    que.pop();

    // merge them
    ans += min1 + min2;
    que.push(min1 + min2);
  }

  printf("%lld\n", ans);
}

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &L[i]);
  }
  solve();
}