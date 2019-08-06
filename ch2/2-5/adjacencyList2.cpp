#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_V = INT_MAX;

struct vertex {
  vector<vertex*> edge;
  /**
   * attribute of vertex
   */
};

vertex G[MAX_V];

int main() {
  int V, E;
    scanf("%d %d", &V, &E);
  for (int i = 0; i < E; i++) {
    int s, t;
    scanf("%d %d", &s, &t);
    G[s].edge.push_back(&G[t]);
    // G[t].edge.push_back(&G[s]);
  }
  /**
   * manipulate the graph
   */

  return 0;
}