#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50000;
const int MAX_K = 100000;
int parent[MAX_N * 3];
int depth[MAX_N];
int N, K;
int TYPE[MAX_K], X[MAX_K], Y[MAX_K];

// initialize with n element
void init(int n) {
  for (int i = 0; i < n; i++) {
    parent[i] = i;
    depth[i] = 0;
  }
}

// seek the root of a tree
int find(int x) {
  if (parent[x] == x) {
    return x;
  } else {
    return parent[x] = find(parent[x]);
  }
}

// merge sets to which x and y belong
void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (depth[x] < depth[y]) {
    parent[x] = y;
  } else {
    parent[y] = x;
  }
}


// whether x and y belong to the same set?
bool same(int x, int y) {
  return find(x) == find(y);
}

void solve() {
  // initialize Union-Find-Tree
  // Let x, x+N, x+2N be elements of x-A, x-B, x-C.
  init(N * 3);

  int ans = 0;
  for (int i = 0; i < K; i++) {
    int type = TYPE[i];
    int x = X[i] - 1; // Range from 0 to N-1
    int y = Y[i] - 1;

    // incorrect number
    if (x < 0 || y < 0 || N <= x || N <= y) {
      ans++;
      continue;
    }

    if (type == 1) {
      // Information that x and y are the same information.
      if ( same(x, y + N) || same(x, y + 2 * N) ) {
        ans++;
      } else {
        unite(x, y);
        unite(x + N, y + N);
        unite(x + 2 * N, y + 2 * N);
      }
    } else {
      // Information that x eat y.
      if ( same(x, y) || same(x, y + 2 * N) ) {
        ans++;
      } else {
        unite(x, y + N);
        unite(x + N, y + 2 * N);
        unite(x + 2 * N, y);
      }
    }
  }

  printf("%d\n", ans);
}

int main() {
  scanf("%d %d", &N, &K);
  for (int i = 0; i < K; i++) {
    scanf("%d %d %d", &TYPE[i], &X[i], &Y[i]);
  }
  solve();
}