// author: Ali
// date  : 22/09/2023
#include <bits/stdc++.h>

int main () {
    int a = 0, b = 0;
    int n1, n2;
    for (int i = 0; i < 4; ++i) {
        std::cin >> n1 >> n2;
        a += n1;
        b += n2; 
    }

    if (a > b) std::cout << 1;
    else if (a < b) std::cout << 2;
    else std::cout << "DRAW";
    return 0;
}