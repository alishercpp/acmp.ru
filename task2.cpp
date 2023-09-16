#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    if ( n > 0 ) {
        std::cout << n * ( n + 1 ) / 2;
    } else {
        std::cout << -n * ( n - 1 ) / 2 + 1; 
    }
    return 0;
}
