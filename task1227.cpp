// author: Ali
// date  : 23/09/2023
#include <bits/stdc++.h>

long long factorial(int n) {
    if (n == 1 or n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main () {
    int n, k;
    std::cin >> n >> k;
    long long answer = factorial(n) / ( factorial(k) * factorial(n - k) );
    std::cout << answer;
    return 0;
}