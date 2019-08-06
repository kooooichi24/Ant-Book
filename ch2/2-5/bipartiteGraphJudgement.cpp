#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// input
const int MAX_V = 100;
vector<int> G[MAX_V];
int V, E;
int color[MAX_V];

bool dfs(int v, int c) {
  color[v] = c;
  for (int i = 0; i < G[v].size(); i++) {
    // False if adjacency vertites have the same color
    if (color[G[v][i]] == c) return false;
    // If adjacency vertites are not painted yet, paint with -c
    if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) return false;
  }
  // True if all vertices are painted
  return true;
}

void solve() {
  for (int i = 0; i < V; i++) {
    if (color[i] == 0) {
      if (!dfs(i, 1)) {
        printf("No\n");
        return;
      }
    }
  }
  printf("Yes\n");
}

int main() {
  scanf("%d %d", &V, &E);
  for (int i = 0; i < E; i++) {
    int s, t;
    scanf("%d %d", &s, &t);
    G[s].push_back(t);
    G[t].push_back(s);
  }

  solve();
}