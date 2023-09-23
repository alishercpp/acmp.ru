// author: Ali
// date  : 23/09/2023
#include <bits/stdc++.h>

int countDigits(std::string s) {
    int counter = 0;
    for (auto i: s) {
        if (std::isdigit(i)) {
            counter += 1;
        }
    }
    return counter;
}

int main () {
    std::string s;
    std::getline(std::cin, s);
    std::cout << countDigits(s);
    return 0;
}