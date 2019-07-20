#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 10000;
int heap[MAX_N], size = 0;

void push(int x) {
  // 自分のノードの番号
  int i = size++; // 後置演算子：szを代入した後，szをインクリメントしている．
  
  while (i > 0) {
    // 親のノード番号
    // intが整数部のみ代入する特性を活かす．
    // そのため，左の子でも右の子でも親のインデックス番号を推定可能
    int parentIndex = (i - 1) / 2;
    
    // もう逆転していないなら抜ける
    if (heap[parentIndex] <= x) break;

    // 親のノードの数字を下ろして，自分は上に
    heap[i] = heap[parentIndex];
    i = parentIndex;
  }

  heap[i] = x;

  for (int j = 0; j < size; j++) {
    printf("%d", heap[j]);
  }
  printf("\n");
}

int pop() {
  // 最小値を保存
  int min = heap[0];

  // 根に持ってくる値
  int x = heap[--size];

  // 根から下ろしてくる
  // 子要素が存在する場合
  int i = 0;
  while (i * 2 + 1 < size) {
    // children同士を比較
    int a = i * 2 + 1;
    int b = i * 2 + 2;
    if (b < size && heap[b] < heap[a]) a = b;

    // もう逆転していないなら終了
    if (heap[a] >= x) break;

    // 子の数字を持ち上げる
    heap[i] = heap[a];
    i = a;
  }

  heap[i] = x;
  return min;
}

int main() {
  push(0);
  push(4);
  push(2);
  push(3);
  push(1);
  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());
}