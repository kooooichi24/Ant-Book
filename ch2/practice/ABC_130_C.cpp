#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  double W, H, x, y;
  cin >> W >> H >> x >> y;


  double area = (W*H) / 2;
  int g = (x*2 == W && y*2 == H) ? 1: 0;
  cout << area << " " << g << endl;
  cout << H/2 << x;
  return 0;
}