#include <iostream>
using namespace std;

int largestNumber(int n);

int main() {
    int n; 
    std::cin >> n;

    std::cout << largestNumber(n);
    return 0;
}

int largestNumber(int n) {
    int r = 10;
    for(int i = 1; i < n; i++) {
        r *= 10;
    }
    r--;
    return r;
}
