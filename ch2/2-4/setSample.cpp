#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // declaration
  set<int> s;

  // add element
  s.insert(1);
  s.insert(3);
  s.insert(5);
  s.insert(7);
  s.insert(9);
  s.insert(11);
  s.insert(13);
  s.insert(15);
  s.insert(17);

  // find element
  set<int>::iterator ite;
  
  ite = s.find(1);
  if (ite == s.end()) puts("not found");
  else puts("found");

  ite = s.find(2);
  if (ite == s.end()) puts("not found");
  else puts("found");

  // remove element
  s.erase(3);

  // another way of finding for element
  if (s.count(3) != 0) puts("not found");
  else puts("found");

  // loop all elements
  for (ite = s.begin(); ite != s.end(); ++ite) {
    printf("%d\n", *ite);
  }

  return 0;
}