#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// a structure representing a node
struct node{
  int val;
  node *lch, *rch;
};

// add number x
node *insert(node *p, int x) {
  if (p == NULL) {
    node *q = new node;
    q->val = x;
    q->lch = q->rch = NULL;
    return q;
  } else {
    if (x < p->val) p->lch = insert(p->lch, x);
    else p->rch = insert(p->rch, x);
    return p;
  }
}

// find number x
bool find(node *p, int x) {
  if (p == NULL) return false;
  else if (x == p->val) return true;
  else if (x < p->val) find(p->lch, x);
  else find(p->rch, x);
}

// remove number x
node *remove(node *p, int x) {
  if (p == NULL) return NULL;

  if (x < p->val) p->lch = remove(p->lch, x);
  else if (x > p->val) p->rch = remove(p->rch, x);
  else if (p->lch == NULL) {
    node *q = p->rch;
    delete p;
    return q;
  } else if (p->lch->rch == NULL) {
    node *q = p->lch->lch;
    delete p;
    return q;
  } else {
    node *q;
    for (q = p->lch; q->rch->rch != NULL; q = q->rch);
    node *r = q->rch;
    q->rch = r->lch;
    r->lch = p->lch;
    r->rch = p->rch;
    delete p;
    return r;
  }
  return p;
}


int main() {
  node *root = NULL;
  root = insert(root, 1);
  find(root, 1);
  return 0;
}