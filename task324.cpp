// author: Ali
// date  : 22/09/2023
#include <bits/stdc++.h>

int main () {
    int n;
    std::cin >> n;
    int r = 0;
    for (int i = 0; i < 2; ++i) {
        r = (r*10) + n % 10;
        n /= 10;
    }

    n == r ? std::cout << "YES" : std::cout <<"NO";
    return 0;
}