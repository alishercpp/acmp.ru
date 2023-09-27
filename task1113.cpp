// author: Ali
// date  : 27/09/2023
#include <bits/stdc++.h>

int main() {
    long long a, b;
    std::cin >> a >> b;
    if (a < b) {
        a = a * 10;
    }
    if (a % b == 0) std::cout << 1;
    else std::cout << 2;
}