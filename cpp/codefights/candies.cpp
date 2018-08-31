#include <iostream>

using namespace std;

int candies(int n, int m);

int main() {
    int n,m;
    std::cin >> n >> m;
    std::cout << candies(n, m);
    return 0;
}

int candies(int n, int m) {
    return m - (m % n);
}