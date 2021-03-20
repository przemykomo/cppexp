#include <iostream>
#include "Vector.hpp"

int main() {
    Vector v = {2, 3, 5};

    std::cout << "v = { ";
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ", ";
    }
    std::cout << "}\n";
    return 0;
}
