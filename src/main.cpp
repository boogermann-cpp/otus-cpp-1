#include <iostream>
#include "version.h"

int main(int, char**) {
    std::cout << "Hello, world!\n";
    std::cout << version() << std::endl;
}
