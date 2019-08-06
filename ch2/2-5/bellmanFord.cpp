#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define INF 10000000

const int MAX_V = 100;
const int MAX_E = 100;

// edge of cost from A to B
struct edge {
  int from;
  int to;
  int cost;
};

vector<edge> edges; // edge
int d[MAX_V]; // shortest distance
int V, E; // V is the number of vurteces, E is the number of edges
int S; //start point
int G; //end point

bool find_negative_loop() {
  memset(d, 0, sizeof(d));

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < E; j++) {
      edge e = edges[j];
      if (d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;

        if (i == V - 1) return true;
      }
    }
  }
  return false;
}

int shortest_path(int s) {
  /**
   * initialize
   * make all verteces INF
   * make start points Zero
   */
  for (int i = 0; i < V; i++) d[i] = INF;
  d[s] = 0;

  while (true) {
    bool update = false;
    for (int i = 0; i < E; i++) {
      edge e = edges[i];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        update = true;
      }
    }
    if (!update) break;
  }
  return d[G];
}

void solve() {
  int ans = shortest_path(S);
  printf("%d\n", ans);

  if (find_negative_loop() == true) printf("negative loop");
  else printf("There is not negative loop");
}

int main() {
  scanf("%d %d", &V, &E);
  scanf("%d %d", &S, &G);
  for (int i = 0; i < E; i++) {
    edge add;
    scanf("%d %d %d", &add.from, &add.to, &add.cost);
    edges.push_back(add);
  }

  solve();
}