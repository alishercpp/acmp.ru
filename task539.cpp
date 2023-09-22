// author: Ali
// date  : 22/09/2023
#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    if ( n == 1 ) std::cout << 0;
    else {
        n % 2 == 0 ? std::cout << n / 2 : std::cout << n;
    }
    return 0;
}