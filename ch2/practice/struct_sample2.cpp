#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define PERSON_NUM 5

typedef struct {
  char name[20];
  char sex;
  int age;
  double height;
  double weight;
} person_t;

typedef struct {
  person_t boy;
  person_t girl;
  int month;
} couple_t;

int main() {
  person_t p[PERSON_NUM] = {{"Bob",      'M', 19, 165.4, 72.5},
                            {"Alice",    'F', 19, 161.7, 44.2},
                            {"Tom",      'M', 20, 175.2, 66.3},
                            {"Stefany",  'F', 18, 159.3, 48.5},
                            {"Leonardo", 'M', 19, 172.8, 67.2}};

  couple_t cpl = {{"Tom",     'M', 20, 175.2, 66.3},
                  {"Stefany", 'F', 18, 159.3, 48.5},
                  8};
  printf("%s and %s are going together for %d month(s).\n",
         cpl.boy.name, cpl.girl.name, cpl.month);
  

  double height_sum, weight_sum, height_ave, weight_ave;

  for (int i = 0; i < PERSON_NUM; i++) {
    height_sum += p[i].height;
    weight_sum += p[i].weight;
  }

  height_ave = height_sum / PERSON_NUM;
  weight_ave = weight_sum / PERSON_NUM;

  printf("average height = %f\n", height_ave);
  printf("average weight = %f\n", weight_ave);

  return 0;
}