#include <iostream>
#include <list>
using namespace std;

void display(list<int>& intList);
int main() {

    int arr[] = {10,11,34,101,45};
    std::list<int> intList (arr, arr+5);

    display(intList);
    return 0;
}

void display(list<int>& intList) {
    for(std::list<int>::iterator it = intList.begin(); it != intList.end(); ++it) {
        std::cout << *it << " ";
    }
}
