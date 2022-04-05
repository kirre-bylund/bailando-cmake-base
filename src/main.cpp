#include <iostream>
#include "basic_include.h"

int main(int, char**) {
    std::cout << "Welcome to this template CMake Project" << std::endl;
    std::cout << "Current version is " << getVersionString() << std::endl;


    return 0;
}