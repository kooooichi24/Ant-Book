#include <cstdio>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int n;

int fib(int n){
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    scanf("%d", &n);
    int ans = fib(n);
    printf("%d", ans);
}