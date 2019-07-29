#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = INT_MAX;
int parent[MAX_N];

// initialize with n elements
void init(int n) {
  for (int i = 0; i < n; i++) parent[i] = i;
}

// seek the root of a tree
int find(int x) {
  if (parent[x] == x) return x;
  /**
   * path compression
   * 
   * In the case of a tree named 3-2-1-0. (0 is a root)
   * [0,0,1,2] => [0,0,0,0]
   */
  else return parent[x] = find(parent[x]);
}

// merge sets to which x and y belong
void unite(int x, int y) {
  x = find(x);
  y = find(y);
  if (x == y) return;

  parent[x] = y;
}

// whether x and y belong to the same set?
bool same(int x, int y) {
  return find(x) == find(y);
}

int main() {
  return 0;
}