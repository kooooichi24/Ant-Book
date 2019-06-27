#include <iostream>
#include <vector>
using namespace std;

int n;

int main() {
  cin >> n;

  // {0,1,2,...,n-1}の部分集合の全探索
  for (int bit = 0; bit < (1 << n); bit++) {
    vector<int> S;
    for (int i = 0; i < n; i++) {
      if (bit & (1 << i)) {
        S.push_back(i);
      }
    }

    cout << bit << ": {";
    for (int i = 0; i < int(S.size()); i++) {
      cout << S[i] << " ";
    }
    cout << "}" << "\n";
  }
}