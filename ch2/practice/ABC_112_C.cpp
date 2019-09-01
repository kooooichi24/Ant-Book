#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N; cin >> N;
  vector<int> vx(N), vy(N), vh(N);
  int si = -1;
  for (int i = 0; i < N; i++) {
    cin >> vx[i] >> vy[i] >> vh[i];
    if (vh[i] > 0) si = i;
  }
  
  int resx = -1, resy = -1, resh = -1;
  for (int Cx = 0; Cx <= 100; Cx++) {
    for (int Cy = 0; Cy <= 100; Cy++) {
      int h = vh[si] + abs(Cx-vx[si]) + abs(Cy-vy[si]);
      bool ok = true;
      
      for (int i = 0; i < N; i++) {
        if (vh[i]>0 && h-vh[i]!=abs(Cx-vx[i])+abs(Cy-vy[i])) {
          ok = false;
        }
        if (vh[i]==0 && h>abs(Cx-vx[i])+abs(Cy-vy[i])) {
          ok = false;
        }
      }
      if (ok) resx = Cx, resy = Cy, resh = h;
    }
  }
  cout << resx << " " << resy << " " << resh << endl;
  return 0;
}