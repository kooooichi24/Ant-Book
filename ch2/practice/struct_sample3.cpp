#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

typedef struct {
  double re;
  double im;
} complex_t;

// function arguments of structure type
void printComplex(complex_t c) {
  printf("%f + %f i\n", c.re, c.im);
}

// function return values of structure type
complex_t addComplex(complex_t a, complex_t b) {
  complex_t cc;

  cc.re = a.re + b.re;
  cc.im = a.im + b.im;
  
  return cc;
}

/**
 * function arguments of structure pointer type
 * 
 * There are roughly two reasons for passing pointer values, 
 * rather than coping the values of the entire structure and passing them as arguments.
 * 
 * 1. Only pointer values require less time to deliver than the values of the entire structure.
 * 2. The contents of the structre outside the function can be changed inside the function.
 */
void addComplexPtr(complex_t *a, complex_t *b, complex_t *c) {
  /**
   * direct reference
   * 
   * The operater "." for directly referencing structure members 
   * are called "member direct reference operaters" or simply "member reference operators" or "dot operators".
   */
  (*c).re = (*a).re + (*b).re;
  (*c).im = (*a).im + (*b).im;

  /**
   * indirect reference
   * 
   * The operater "->" for indirectly referencing structure members
   * are called "member indirect reference operaters" or "allow operaters".
   */
  // c->re = a->re + b->re;
  // c->im = a->im + b->im;
}

int main() {
  complex_t c = {1.2, 3.4};
  printComplex(c);
  
  complex_t a = {1.2, 3.4};
  complex_t b = {5.6, 7.8};
  complex_t cc;

  cc = addComplex(a, b);
  printComplex(cc);

  complex_t x = {1.2, 3.4};
  complex_t y = {5.6, 7.8};
  complex_t z;
  addComplexPtr(&x, &y, &z);
  printComplex(z);

  return 0;
}