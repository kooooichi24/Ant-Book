#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define INF 100000000

int main() {
  int V, E;
  cin >> V >> E;

  // Adjacency matrix G
  vector<vector<int>> G(V, vector<int>(V, INF));

  // If the start point and end point are the same, the cost is set to zero.
  for (int i = 0; i < V; i++) G[i][i] = 0;

  // Edge input
  for (int i = 0; i < E; i++) {
    int start, end, cost;
    cin >> start >> end >> cost;

    // Corresponding to multiple edges
    G[start][end] = min(G[start][end], cost);
    G[end][start] = min(G[end][start], cost);
  }

  // warshall_floyd
  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
      }
    }
  }

  return 0;
}