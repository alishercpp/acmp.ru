// author: Ali
// date  : 22/09/2023
#include <bits/stdc++.h>

int main () {
    int a, b, c;
    std::cin >> a >> b >> c;
    int max = std::max({a, b, c});
    int min = std::min({a, b, c});
    std::cout << max - min;
    return 0;
}