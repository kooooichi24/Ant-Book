#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  // declaration (key:int, value:const char*)
  map<int, const char*> m;

  // add element
  m.insert(make_pair(1, "ONE"));
  m.insert(make_pair(10, "TEN"));
  m.insert(make_pair(2, "TWO"));
  m.insert(make_pair(6, "SIX"));
  m[100] = "HUNDRED"; // another way of declare

  // find element
  map<int, const char*>::iterator ite;
  ite = m.find(1);
  puts(ite->second);

  ite = m.find(2);
  if (ite == m.end()) puts("not found");
  else puts(ite->second);

  puts(m[10]); // another way of find

  // remove element
  m.erase(10);

  for (ite = m.begin(); ite != m.end(); ++ite) {
    printf("%d: %s\n", ite->first, ite->second);
  }

  return 0;
}