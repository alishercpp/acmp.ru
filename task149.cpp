// author: Ali
// date  : 23/09/2023
#include <bits/stdc++.h>
#include <vector>

int main () {
    int n, e;
    std::cin >> n;
    std::vector<int>::iterator p;
    std::vector<int> a[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> e;
        a->push_back(e);
    }
    std::reverse(a->begin(), a->end());

    for (p = a->begin(); p < a->end(); p++) {
        std::cout << *p << " ";
    }
    return 0;
}