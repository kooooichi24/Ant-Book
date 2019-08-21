#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  pair<pair<string, int>, int> pairs[N];
  for (int i = 0; i < N; i++) {
    string city;
    int score;
    cin >> city >> score;
    pairs[i] = make_pair(make_pair(city, -score), i);
  }


  sort(pairs, pairs + N);
  for (int i = 0; i < N; i++) {
    cout << pairs[i].second + 1 << endl;
  }
  return 0;
}