#include <iostream>
#include "Vector.hpp"

int main() {
    Vector v = {2, 3, 5};
    v.pushBack(5);
    std::cout << v.size() << ", " << v.capacity() << '\n';
    v.popBack();
    v.popBack();
    std::cout << v.size() << ", " << v.capacity() << '\n';
    v.shrinkToFit();
    std::cout << v.size() << ", " << v.capacity() << '\n';
    v.pushFront(23);
    std::cout << v.size() << ", " << v.capacity() << '\n';
    v.pushFront(15);
    std::cout << v.size() << ", " << v.capacity() << '\n';
    v.popFront();
    std::cout << v.size() << ", " << v.capacity() << '\n';
    std::cout << "v = { ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << "}\n";
    return 0;
}
