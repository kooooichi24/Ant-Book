#include <queue>
#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // 宣言
  priority_queue<int> pque;
  // ⇩小さい方から取り出す
  // priority_queue<int, vector<int>, greater<int> > pque;

  // add a element
  pque.push(3);
  pque.push(5);
  pque.push(1);

  // loop until empty
  while (!pque.empty()) {
    // get and delete a max value
    printf("%d\n", pque.top());
    pque.pop();
  }

  return 0;
}