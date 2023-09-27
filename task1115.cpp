// author: Ali
// date  : 27/09/2023
#include <bits/stdc++.h>

int main() {
    long long n, k;
    std::cin >> n >> k;
    k % n == 0 ? std::cout << k / n << " " << k % n << " " << 0 : std::cout << k / n << " " << k % n << " " << n - (k % n);
}