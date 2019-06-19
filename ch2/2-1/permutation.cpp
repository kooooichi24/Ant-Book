#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100;

bool used[MAX_N];
int perm[MAX_N];


// {0,1,2,3,...,n-1}の並び替えn通りを生成する
void permutation1(int pos, int n) {
  // permに対する操作
  if (pos == n) return;

  // permのpos番目を0~n-1のどれにするかループ
  for (int i = 0; i < n; i++) {
    if (!used[i]) {
      perm[pos] = i;
      // iを使ったのでフラグをtrueにしておく
      used[i] = true;
      permutation1(pos + 1, n);
      // 戻ってきたらフラグを戻しておく
      used[i] = false;
    }
  }
  return ;
}



// 重複があっても全ての順列を生成する
// next_permutationは辞書順で次の順列を生成する
int perm2[MAX_N];

void permutation2(int n) {
  for (int i = 0; i < n; i++) {
    perm2[i] = i;
  }
  do {

  } while (next_permutation(perm2, perm2 + n));
  // すべての順列を生成し終わったらnext_permutationはfalseを返す
  return ;
}


int main() {
  int n;
  scanf("%d", &n);
  permutation1(10, n);
  printf("%d", perm[5]);
}