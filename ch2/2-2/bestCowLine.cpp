#include<iostream>
#include<algorithm>
#include <string>
using namespace std;

int N;
string S;
string T;

string reverseString(string str) {
  string r;
  reverse_copy(str.begin(), str.end(), back_inserter(r));
  return r;
}

void solve() {
  string R = reverseString(S);

  for (int i = 0; i < N; i++) {
    if (S <= R) {
      T.push_back(S.front());
      S.erase(S.begin());
      R.pop_back();
    } else {
      T.push_back(R.front());
      R.erase(R.begin());
      S.pop_back();
    }
  }
  cout << T << "\n";
}

int main() {
  cin >> N; 
  cin >> S;
  solve();
}