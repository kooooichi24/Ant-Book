#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef struct {
  char name[20];
  char sex;
  int age;
  double height;
  double weight;
} person_t;

int main() {
  person_t p1 = {"Koichi", 'M', 23, 169.0, 53.0};
  person_t p2;

  // assignment of structure
  p2 = p1;
  
  printf("%s %c %d %f %f\n", p1.name, p1.sex, p1.age, p1.height, p1.weight);
  p1.age ++;
  p1.height += 10.0;
  p1.weight += 15.0;

  printf("p1 is %s %c %d %f %f\n", p1.name, p1.sex, p1.age, p1.height, p1.weight);
  printf("p2 is %s %c %d %f %f\n", p2.name, p2.sex, p2.age, p2.height, p2.weight);

  // size of structure
  printf("persno_t=%d", sizeof(p2));

  return 0;
}