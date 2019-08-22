#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> L;
vector<int> A; // A, B, C

int main() {
  cin >> N;
  A.resize(3);
  for (int i = 0; i < 3; i++) cin >> A[i];
  L.resize(N);
  for (int i = 0; i < N; i++) cin >> L[i];


  int min_cost = 1<<19;
  vector<int> bit(3);
  for (bit[0] = 1; bit[0] < (1<<N); bit[0]++) {
    for (bit[1] = 1; bit[1] < (1<<N); bit[1]++) {
      for (bit[2] = 1; bit[2] < (1<<N); bit[2]++) {
        if (bit[0] & bit[1]) continue;
        if (bit[0] & bit[2]) continue;
        if (bit[1] & bit[2]) continue;

        vector<int> sums(3, 0), nums(3, 0);
        for (int i = 0; i < N; i++) {
          for (int j = 0; j < 3; j++) {
            if (bit[j] & (1<<i)) {
              sums[j] += L[i];
              nums[j]++;
            }
          }
        }

        int score = 0;
        for (int i = 0; i < 3; i++) {
          score += abs(sums[i] - A[i]);
          score += (nums[i] - 1) * 10;
        }
        
        min_cost = min(min_cost, score);
      }
    }
  }
  cout << min_cost << endl;
  return 0;
}