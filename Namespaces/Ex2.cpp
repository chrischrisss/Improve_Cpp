#include <iostream>

int global = 45; // this is in global namespace

namespace number {
    int global = 450; // this is in 'number' namespace

    void f() {
        int global = 4500; // this is in local function scope

        std::cout << global << std::endl; // prints 45
        std::cout << number::global << std::endl; //prints 450
        std::cout << ::global << std::endl; // prints 45000
    }
}

int main() {

    number::f();

    return 0;
}
