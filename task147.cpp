// author: Ali
// date  : 27/09/2023
#include <bits/stdc++.h>

long long fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fib(n);
    return 0;
}