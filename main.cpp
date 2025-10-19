/**
 * CMake Project Starter - Main entry point
 * Simple "Hello World" application to demonstrate CMake build system
 */

#include <iostream>
#include "hello.h"

int main() {
    std::cout << "Hello from CMake Project Starter!" << std::endl;
    sayHello(); // Call function from hello.cpp
    return 0;
}