#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define MAX_V 1000
#define INF 10000

int cost[MAX_V][MAX_V]; // cost[u][v] is a cost of edge e=(u,v). (INF if not present)
int dist[MAX_V]; // shortest distance from vertex s
bool used[MAX_V]; // a flag indicating whether it has already been used
int V, E; // V is the number of vurteces, E is the number of edges
int S; //start point
int G; //end point

void dijkstra(int start, int goal) {
  /* initialize */
  dist[start] = 0;

  while(true) {
    int v = -1;

    // find unused vertex with minimum distance
    for (int u = 0; u < V; u++) {
      if (!used[u] && (v == -1 || dist[u] < dist[v])) v = u;
    }

    // exit if the shortest path of all verteces is determined
    if (v == -1) {
      printf("%d\n", dist[goal]);
      break;
    }

    used[v] = true;

    /**
     * For verteces that are "directly connected" and "indeterminate" from the now determined location, 
     * calculate the distance when going through the determined location, and rewrite it if it is smaller than the previous distance.
     */
    for (int u = 0; u < V; u++) {
      dist[u] = min(dist[u], dist[v] + cost[v][u]);
    }
  }
  
  
}

int main() {
  /* initialize */
  for (int i = 0; i < MAX_V; i++) {
    dist[i] = INF;
    used[i] = false;
    for (int j = 0; j < MAX_V; j++) {
      cost[i][j] = INF;
    }
  }

  /* input */
  scanf("%d %d", &V, &E);
  scanf("%d %d", &S, &G);
  for (int i = 0; i < E; i++) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    cost[a][b] = c;
  }

  dijkstra(S, G);
}