// author: Ali
// date  : 22/09/2023 
#include <bits/stdc++.h>

int main () {
    int n;
    std::cin >> n;
    int l = 0, r = 0;
    for (int i = 0; i < 3; ++i) {
        r += n % 10;
        n /= 10;
    }
    for (int i = 0; i < 3; ++i) {
        l += n % 10;
        n /= 10;
    }
    l == r ? std::cout << "YES" : std::cout << "NO";
    return 0;
}