#include <iostream>

using namespace std;

int addTwoDigits(int n);

int main() {
    int n;
    std::cin >> n;

    cout << addTwoDigits(n);
    return 0;
}

int addTwoDigits(int n) {
    int a,b;
    b = n % 10;
    a = n / 10;
    return a + b;
}