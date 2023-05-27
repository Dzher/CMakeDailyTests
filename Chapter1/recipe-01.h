// Compiling a single source file into an executable

#include <cstdlib>
#include <iostream>
#include <string>

std::string sayHello()
{
    return std::string("Hello, CMake World!");
}

int main()
{
    std::cout<<sayHello()<<std::endl;
    return 0;
}