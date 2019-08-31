#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // input
  int N, b0, b1, b2;
  cin >> N >> b0 >> b1 >> b2;
  vector<vector<int>> l(N, vector<int>(N));
  vector<vector<int>> r(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> l[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> r[i][j];
    }
  }



  vector<vector<int>> A(N, vector<int>(N));
  int left, right;
  for (int i = 0; i < N; i++) {
    // 行の累積和の配列の初期設定
    vector<int> row(N+1, 0);

    for (int j = 0; j < N; j++) {  
      left = l[i][j];
      right = r[i][j];
      if (left > right) swap(left, right);

      
      if (j == 0) {
        // 行のはじめの要素はramdomで設定
        int randam = rand() % (right-left+1) + left;
        A[i][j] = randam;
        row[1] = randam;
      } else {
        for (int ruiseki_element = j-1; ruiseki_element >= 0; ruiseki_element--) {
          int c = row[j] - row[ruiseki_element];
          if (left<=b0-c && b0-c<=right) {
            A[i][j] = b0-c;
            row[j+1] = row[j] + b0-c;
            break;
          }
        }
        if (A[i][j] == 0) A[i][j] = rand() % (right-left+1) + left;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}