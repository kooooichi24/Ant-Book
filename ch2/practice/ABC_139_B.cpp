#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int cnt = 0;
  int sum = 1;
  while (sum < B) {
    sum += A-1;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
