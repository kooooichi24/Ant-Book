#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = INT_MAX;
int parent[MAX_N];

// initialize with n emelent.
void init(int n) {
  for (int i = 0; i < n; i++) {
    parent[i] = i;
    rank[i] = 0;
  }
}

// seek the root of a tree
int find(int x) {
  if (parent[x] == x) return x;
  else parent[x] == find(parent[x]);
}

// merge sets to which x and y belong
void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  if (rank[x] < rank[y]) {
   parent[x] = y; 
  } else {
    parent[y] = x;
    if (rank[x] == rank[y]) rank[x]++;
  }
}

// whether x and y belong to the same set?
bool same(int x, int y) {
  return find(x) == find(y);
}

int main() {
  return 0;
}