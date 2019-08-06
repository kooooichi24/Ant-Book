#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_V = INT_MAX;
vector<int> G[MAX_V];

/**
 * If there is an attribute on the edge.
 * 
 * struct edge {int to, cost};
 * vector<edge> G[MAX_V];
 */

int main() {
  int V, E;
  scanf("%d %d", &V, &E);
  for (int i = 0; i < E; i++) {
    // stretch the edge from s to t
    int s, t;
    scanf("%d %d", &s, &t);
    G[s].push_back(t);
    // G[t].push_back(s); // In the case of undirected graph, further extend the edge from t to s
  }

  /**
   * manipulate the graph
   */
  
  return 0;
}