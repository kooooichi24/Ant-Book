#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

int main() {
  // input
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n-1));
  rep(i,n) {
    rep(j,n-1) {
      cin >> a[i][j];
      a[i][j]--;
    }
    reverse(a[i].begin(), a[i].end());
  }

  // Add to queue if matches are the same
  vector<P> q;
  auto check = [&](int i){
    if (a[i].size() == 0) return;
    int j = a[i].back();
    if (a[j].back() == i) {
      P p(i,j);
      if (p.first > p.second) swap(p.first, p.second);
      q.push_back(p);
    }
  };
  
  // initialization
  rep(i,n) {
    check(i);
  }

  // The process is repeated untill the queue for the next match is empty.
  int day = 0;
  while (q.size() > 0) {
    day++;
    sort(q.begin(), q.end());
    q.erase(unique(q.begin(), q.end()), q.end());
    vector<P> prevQ;
    swap(prevQ, q);
    for (P p : prevQ) {
      int i = p.first, j = p.second;
      a[i].pop_back();
      a[j].pop_back();
    }
    for (P p : prevQ) {
      int i = p.first, j = p.second;
      check(i);
      check(j);
    }
  }

  // output
  rep(i,n) {
    if (a[i].size() != 0) {
      puts("-1");
      return 0;
    }
  }
  cout << day << endl;
  return 0;
}