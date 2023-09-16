#include <bits/stdc++.h>

int main() {
    int n;
    std::cin >> n;
    int k[n];
    int odd_count  = 0;
    int even_count = 0;

    for ( int i=0; i < n; ++i) {
        std::cin >> k[i];
        if ( k[i] % 2 == 0 ) {
            even_count++;
        } else {
            odd_count++;
        }
    }

    
    for ( int i=0; i < n; ++i) {
        if ( k[i] % 2 != 0) {
            std::cout << k[i] << " ";
        }
    }

    std::cout << std::endl;

    for ( int i=0; i < n; ++i) {
        if ( k[i] % 2 == 0) {
            std::cout << k[i] << " ";
        }
    }

    std::cout << std::endl;

    if ( even_count > odd_count || even_count == odd_count ) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }


    return 0;
}
