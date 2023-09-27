// author: Ali
// date  : 27/09/2023
#include <bits/stdc++.h>

int main() {
    long long n;
    std::cin >> n;
    if (n % 10 == 0) std::cout << n / 10;
    else std::cout << n / 10 + 1;
}