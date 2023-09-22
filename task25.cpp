// author: Ali
// date  : 22/09/2023
#include <bits/stdc++.h>

int main () {
    long long a, b;
    std::cin >> a >> b;
    if (a > b) std::cout << ">";
    else if (a < b) std::cout << "<";
    else std::cout << "=";
    return 0;   
}